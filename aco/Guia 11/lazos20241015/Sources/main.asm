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
fuente  ds.b 5     ;ambos son de un byte (char)
destino   ds.b  5


; code section
            ORG   ROMStart


Entry:
_Startup:
            LDS   #RAMEnd+1       ; initialize the stack pointer

;            CLI                     ; enable interrupts
            
            LDX #$0000

lazo:   LDAA fuente, X  ; modo de directcionamiento indexado. suma fuente  + X => A
        SUBA  #$20                ;sustrae 20 en decimales de A
        STAA  destino,X   ; guarda en A destino + X       ;
        INCX      ; Incrementa el reg X++
        CPX #$5   ; comparacion
        BNE lazo    ; hace una operacion booleana (branch if not equal)
        STOP   ; detiene el funcionamiento

;**************************************************************
;*                 Interrupt Vectors                          *
;**************************************************************
            ORG   $FFFE
            DC.W  Entry           ; Reset Vector
