
format MS COFF
section '.code' code readable executable

public __cmp64
public __udiv64
public __umod64
public __sdiv64
public __smod64
public __umul64
public __shl64
public __shr64
public __sar64
public __lookup

__cmp64:
	mov	eax, [esp + 16]
	cmp	eax, [esp + 8]
	jnz	.1
	mov	eax, [esp + 12]
	cmp	eax, [esp + 4]
	jz	.1
	mov	ax, $0201
	ja	.2
	cmp	al, ah
	ret	16
.2:	cmp	ah, al
.1:	ret	16

__udiv64:
	push	ebx
	cmp	dword [esp + 16 + 4], 0
	jnz	.1
	
	mov	ebx, [esp + 12 + 4]
	xor	edx, edx
	mov	eax, [esp + 8 + 4]
	div	ebx
	mov	ecx, eax
	mov	eax, [esp + 4 + 4]
	div	ebx
	mov	edx, ecx
	pop	ebx
	ret	16

.1:	; esp + 20 : N
	; esp + 28 : D
	; edx:eax - Q -- at the end of 64 iterations
	; ecx:ebx - R
	; edx:eax - N' -- before the 64 bit iterations
	; edi:esi - D
	push	esi
	push	edi
	push	ebp
	mov	eax, [esp + 20]
	mov	edx, [esp + 24]
	mov	esi, [esp + 28]
	mov	edi, [esp + 32]
	xor	ecx, ecx
	xor	ebx, ebx
	
	mov	ebp, 64
.2:	shl	eax, 1	; CF, N' <<= 1
	rcl	edx, 1	; 
	rcl	ebx, 1	; R <<= 1 | CF
	rcl	ecx, 1	;
			
	cmp	ecx, edi	; R >= D ?
	ja	.3	;
	jb	.4	;
	cmp	ebx, esi	;
	jb	.4	;
.3:	sub	ebx, esi	; R -= D
	sbb	ecx, edi	;
	or	al, 1	; Q |= 1
			
.4:	dec	ebp	; next bit
	jnz	.2	;
	
	pop	ebp
	pop	edi
	pop	esi
	pop	ebx
	ret	16
	
__umod64:
	push	ebx
	cmp	dword [esp + 16 + 4], 0
	jnz	.1
	
	mov	ebx, [esp + 12 + 4]
	xor	edx, edx
	mov	eax, [esp + 8 + 4]
	div	ebx
	mov	ecx, eax
	mov	eax, [esp + 4 + 4]
	div	ebx
	mov	eax, edx
	xor	edx, edx
	pop	ebx
	ret	16

.1:	; esp + 20 : N
	; esp + 28 : D
	; edx:eax - Q -- at the end of 64 iterations
	; ecx:ebx - R
	; edx:eax - N' -- before the 64 bit iterations
	; edi:esi - D
	push	esi
	push	edi
	push	ebp
	mov	eax, [esp + 20]
	mov	edx, [esp + 24]
	mov	esi, [esp + 28]
	mov	edi, [esp + 32]
	xor	ecx, ecx
	xor	ebx, ebx
	
	mov	ebp, 64
.2:	shl	eax, 1	; CF, N' <<= 1
	rcl	edx, 1	; 
	rcl	ebx, 1	; R <<= 1 | CF
	rcl	ecx, 1	;
			
	cmp	ecx, edi	; R >= D ?
	ja	.3	;
	jb	.4	;
	cmp	ebx, esi	;
	jb	.4	;
.3:	sub	ebx, esi	; R -= D
	sbb	ecx, edi	;
	or	al, 1	; Q |= 1
			
.4:	dec	ebp	; next bit
	jnz	.2	;
	
	mov	eax, ebx
	mov	edx, ecx
	pop	ebp
	pop	edi
	pop	esi
	pop	ebx
	ret	16
	
__sdiv64:
	push	ebx
	xor	ecx, ecx
	
	; Absolute value and remember sign switch
	mov	edx, [esp + 16 + 4]
	or	edx, edx
	jge	.10
	mov	eax, [esp + 12 + 4]
	neg	edx
	neg	eax
	sbb	edx, 0
	mov	[esp + 12 + 4], eax
	mov	[esp + 16 + 4], edx
	xor	ecx, 1
.10:
	; Absolute value and remember sign switch
	mov	edx, [esp + 8 + 4]
	or	edx, edx
	jge	.11
	mov	eax, [esp + 4 + 4]
	neg	edx
	neg	eax
	sbb	edx, 0
	mov	[esp + 4 + 4], eax
	mov	[esp + 8 + 4], edx
	xor	ecx, 1
.11:	push	ecx
	
	cmp	dword [esp + 16 + 8], 0
	jnz	.1
	
	mov	ebx, [esp + 12 + 8]
	xor	edx, edx
	mov	eax, [esp + 8 + 8]
	div	ebx
	mov	ecx, eax
	mov	eax, [esp + 4 + 8]
	div	ebx
	mov	edx, ecx
	jmp	.common

.1:	; esp + 20 : N
	; esp + 28 : D
	; edx:eax - Q -- at the end of 64 iterations
	; ecx:ebx - R
	; edx:eax - N' -- before the 64 bit iterations
	; edi:esi - D
	push	esi
	push	edi
	push	ebp
	mov	eax, [esp + 24]
	mov	edx, [esp + 28]
	mov	esi, [esp + 32]
	mov	edi, [esp + 36]
	xor	ecx, ecx
	xor	ebx, ebx
	
	mov	ebp, 64
.2:	shl	eax, 1	; CF, N' <<= 1
	rcl	edx, 1	; 
	rcl	ebx, 1	; R <<= 1 | CF
	rcl	ecx, 1	;
			
	cmp	ecx, edi	; R >= D ?
	ja	.3	;
	jb	.4	;
	cmp	ebx, esi	;
	jb	.4	;
.3:	sub	ebx, esi	; R -= D
	sbb	ecx, edi	;
	or	al, 1	; Q |= 1
			
.4:	dec	ebp	; next bit
	jnz	.2	;
	
	pop	ebp
	pop	edi
	pop	esi
.common:
	pop	ecx
	or	ecx, ecx
	jz	.5
	neg	edx
	neg	eax
	sbb	edx, 0
.5:	pop	ebx
	ret	16

__smod64:
	push	ebx
	xor	ecx, ecx
	
	; Absolute value and remember sign switch
	mov	edx, [esp + 16 + 4]
	or	edx, edx
	jge	.10
	mov	eax, [esp + 12 + 4]
	neg	edx
	neg	eax
	sbb	edx, 0
	mov	[esp + 12 + 4], eax
	mov	[esp + 16 + 4], edx
.10:
	; Absolute value and remember sign switch
	mov	edx, [esp + 8 + 4]
	or	edx, edx
	jge	.11
	mov	eax, [esp + 4 + 4]
	neg	edx
	neg	eax
	sbb	edx, 0
	mov	[esp + 4 + 4], eax
	mov	[esp + 8 + 4], edx
	xor	ecx, 1
.11:	push	ecx
	
	cmp	dword [esp + 16 + 8], 0
	jnz	.1
	
	mov	ebx, [esp + 12 + 8]
	xor	edx, edx
	mov	eax, [esp + 8 + 8]
	div	ebx
	mov	ecx, eax
	mov	eax, [esp + 4 + 8]
	div	ebx
	mov	eax, edx
	xor	edx, edx
	jmp	.common

.1:	; esp + 20 : N
	; esp + 28 : D
	; edx:eax - Q -- at the end of 64 iterations
	; ecx:ebx - R
	; edx:eax - N' -- before the 64 bit iterations
	; edi:esi - D
	push	esi
	push	edi
	push	ebp
	mov	eax, [esp + 24]
	mov	edx, [esp + 28]
	mov	esi, [esp + 32]
	mov	edi, [esp + 36]
	xor	ecx, ecx
	xor	ebx, ebx
	
	mov	ebp, 64
.2:	shl	eax, 1	; CF, N' <<= 1
	rcl	edx, 1	; 
	rcl	ebx, 1	; R <<= 1 | CF
	rcl	ecx, 1	;
			
	cmp	ecx, edi	; R >= D ?
	ja	.3	;
	jb	.4	;
	cmp	ebx, esi	;
	jb	.4	;
.3:	sub	ebx, esi	; R -= D
	sbb	ecx, edi	;
	or	al, 1	; Q |= 1
			
.4:	dec	ebp	; next bit
	jnz	.2	;
	
	mov	eax, ebx
	mov	edx, ecx
	pop	ebp
	pop	edi
	pop	esi
.common:
	pop	ecx
	or	ecx, ecx
	jz	.5
	neg	edx
	neg	eax
	sbb	edx, 0
.5:	pop	ebx
	ret	16

__umul64:
	push	ebx
	mov	eax, [esp + 8]
	mul	dword [esp + 16]
	mov	ebx, eax
	mov	ecx, edx
	
	mov	eax, [esp + 8]
	mul	dword [esp + 20]
	add	ecx, eax
	
	mov	eax, [esp + 12]
	mul	dword [esp + 16]
	add	ecx, eax
	
	mov	eax, ebx
	mov	edx, ecx
	pop	ebx
	ret	16

__shl64:
	mov	eax, [esp + 8]
	mov	edx, [esp + 12]
	mov	ecx, [esp + 4]
        	cmp	cl, 64
	jnc	.zero
	cmp	cl, 32
	jnc	.1
	shld	edx, eax, cl
	shl	eax, cl
	ret	12

.1:	mov	edx, eax
	xor	eax, eax
	sub	cl, 32
	shl	edx, cl
	ret	12

.zero:	xor	edx, edx
	xor	eax, eax
	ret	12

__shr64:
	mov	eax, [esp + 8]
	mov	edx, [esp + 12]
	mov	ecx, [esp + 4]
        	cmp	cl, 64
	jnc	.zero
	cmp	cl, 32
	jnc	.1
	shrd	eax, edx, cl
	shr	edx, cl
	ret	12

.1:	sub	cl, 32
	mov	eax, edx
	shr	eax, cl
	xor	edx, edx
	ret	12

.zero:	xor	edx, edx
	xor	eax, eax
	ret	12

__sar64:
	mov	eax, [esp + 8]
	mov	edx, [esp + 12]
	mov	ecx, [esp + 4]
        	cmp	cl, 64
	jnc	.sign
	cmp	cl, 32
	jnc	.1
	shrd	eax, edx, cl
	sar	edx, cl
	ret	12

.1:	sub	cl, 32
	mov	eax, edx
	sar	eax, cl
	sar	edx, 31
	ret	12

.sign:	sar	edx, 31
	mov	eax, edx
	ret	12

__lookup:
	sub	ecx, 8
.next:	add	ecx, 8
	cmp	dword [ecx + 4], 0
	jz	.default
	cmp	[ecx], eax
	jnz	.next
	jmp	dword [ecx + 4]
.default:	jmp	dword [ecx]
