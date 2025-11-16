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
DatoByte1     DS.B 1   ;Reserves 1 byte
DatoWord1     DS.W 1  ;Reserves 2 bytes (word = 2 bytes)
Array         DS.B 5  ; Reserves 5 bytes


; code section
            ORG   ROMStart
            
; InEntry:

Entry:
_Startup:
            LDS   #RAMEnd+1       ; initialize the stack pointer

            CLI                     ; enable interrupts

Tag1:
; Inmediate directioning example
  
           LDAA #%01010101 ; Loads reg A with binary 85
           LDAB #'A'   ; Loads reg B with ASCII 'A' (65 decimal)
           LDX #$2000   ; Loads on X (16 bits) number 0x20000
           
           ANDA #15   ; AND operation with reg A and 15
           
; Extended directioning example
           
           STAB DatoByte1   ; Stores contnet of B in DatoByte1
           STX DatoWord1    ; Stores the content of X in DatoWord1
           ADDA DatoByte1   ; SUms reg A with DatoByte1, and saves res in A
           LDY  DatoWord1   ; SAves value of DatoWord1 in reg Y
           
; Indexed directioning example
           STAA 0,Y  ;Stores val of A @the addr that Y is pointing
           STAB 1,X   ; Saves conts of B @ the addr made up by the sum of
                      ; contents of Y + 1 eq to $WWWW (?)
           
           STX 2,Y    ; Saves conts of X @ the addr made up by the sum of
                      ; contents of Y + 2 eq to $WWWW (?)
 
 ; Implied directioning
            ABA  ;  SUms contents of A + B and stores in A
            INCA  ; A++
            DECB    ; B--
            CLRA    ; No more A
            CLC     ; Deletes carrying flag
    
 ; Relative directioning
             BRA Tag1   ; like GOTO             
           
  



;**************************************************************
;*                 Interrupt Vectors                          *
;**************************************************************
            ORG   $FFFE
            DC.W  Entry           ; Reset Vector
