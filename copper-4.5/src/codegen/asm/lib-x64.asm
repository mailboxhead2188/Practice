format ELF64
;section code readable executable

public __lookup

__lookup:
	sub	rcx, 16
.next:	add	rcx, 16
	cmp	qword [rcx + 8], 0
	jz	.default
	cmp	[rcx], eax
	jnz	.next
	jmp	qword [rcx + 8]
.default:	jmp	qword [rcx]
