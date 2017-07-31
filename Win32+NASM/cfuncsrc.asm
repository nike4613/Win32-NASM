%include "casm.mac"

section .text

proc add
	%$a arg
	%$b arg

	mov eax,[ebp + %$a]
	mov ebx,[ebp + %$b]

	add eax,ebx
endproc