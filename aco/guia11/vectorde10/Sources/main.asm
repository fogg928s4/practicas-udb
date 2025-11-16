;*****************************************************************
;* This stationery serves as the framework for a                 *
;* user application (single file, absolute assembly application) *
;* For a more comprehensive program that                         *
;* demonstrates the more advanced functionality of this          *
;* processor, please see the demonstration applications          *
;* located in the examples subdirectory of the                   *
;* Freescale CodeWarrior for the HC12 Program directory          *
;*****************************************************************

; export symbols
            XDEF Entry, _Startup            ; export 'Entry' symbol
            ABSENTRY Entry        ; for absolute assembly: mark this as application entry point



; Include derivative-specific definitions 
		INCLUDE 'derivative.inc' 

ROMStart    EQU  $4000  ; absolute address to place my code/constant data

; variable/data section

            ORG RAMStart
 ; Insert here your data definition.
original  ds.b 10     ;ambos son de un byte (char)
destino   ds.b  10


; code section
            ORG   ROMStart


Entry:
_Startup:
            LDS   #RAMEnd+1       ; initialize the stack pointer

            
            LDX #$0000

lazo:   LDAA original, X  ; modo de directcionamiento indexado. suma fuente  + X => A
        ADDA  #$30   ; aaa
        STAA  destino,X   ; guarda en A destino + X       ;
        INCX      ; Incrementa el reg X++
        CPX #$A   ; comparacion
        BNE lazo    ; hace una operacion booleana (branch if not equal)
        STOP   ; detiene el funcionamiento

;**************************************************************
;*                 Interrupt Vectors                          *
;**************************************************************
            ORG   $FFFE
            DC.W  Entry           ; Reset Vector
