%include "casm.mac"

extern _dwGetModuleBaseAddress
extern _printf

section .data
printfstr:	db	"CALLABLE"

section .text use32

proc _callModuleOffset
	%$procid	arg
	%$modname	arg
	%$offset	arg

	mov ebx,[%$procid]
	mov ecx,[%$modname]
	mov edx,[%$offset]
	
	push ecx,ebx
	call _dwGetModuleBaseAddress

	add edx,[eax]
	call [edx]
endproc
export _callModuleOffset

callable:
	push printfstr
	call _printf
	reset eax
	ret

proc _getcaaddr
	mov eax,callable
endproc
export _getcaaddr