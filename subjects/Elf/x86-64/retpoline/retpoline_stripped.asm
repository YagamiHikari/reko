;;; Segment .interp (0000000000400238)
0000000000400238                         2F 6C 69 62 36 34 2F 6C         /lib64/l
0000000000400240 64 2D 6C 69 6E 75 78 2D 78 38 36 2D 36 34 2E 73 d-linux-x86-64.s
0000000000400250 6F 2E 32 00                                     o.2.           
;;; Segment .note.ABI-tag (0000000000400254)
0000000000400254             04 00 00 00 10 00 00 00 01 00 00 00     ............
0000000000400260 47 4E 55 00 00 00 00 00 02 00 00 00 06 00 00 00 GNU.............
0000000000400270 20 00 00 00                                      ...           
;;; Segment .hash (0000000000400278)
0000000000400278                         03 00 00 00 06 00 00 00         ........
0000000000400280 05 00 00 00 04 00 00 00 00 00 00 00 00 00 00 00 ................
0000000000400290 00 00 00 00 01 00 00 00 02 00 00 00 03 00 00 00 ................
00000000004002A0 00 00 00 00                                     ....           
;;; Segment .dynsym (00000000004002A8)
;    0                                          00000000 00000000 00 
;    1 free                                     00000000 00000000 12 
;    2 puts                                     00000000 00000000 12 
;    3 __libc_start_main                        00000000 00000000 12 
;    4 calloc                                   00000000 00000000 12 
;    5 __gmon_start__                           00000000 00000000 20 
;;; Segment .dynstr (0000000000400338)
0000000000400338                         00 6C 69 62 63 2E 73 6F         .libc.so
0000000000400340 2E 36 00 70 75 74 73 00 63 61 6C 6C 6F 63 00 5F .6.puts.calloc._
0000000000400350 5F 6C 69 62 63 5F 73 74 61 72 74 5F 6D 61 69 6E _libc_start_main
0000000000400360 00 66 72 65 65 00 47 4C 49 42 43 5F 32 2E 32 2E .free.GLIBC_2.2.
0000000000400370 35 00 5F 5F 67 6D 6F 6E 5F 73 74 61 72 74 5F 5F 5.__gmon_start__
0000000000400380 00                                              .              
;;; Segment .gnu.version (0000000000400382)
0000000000400382       00 00 02 00 02 00 02 00 02 00 00 00         ............ 
;;; Segment .gnu.version_r (0000000000400390)
0000000000400390 01 00 01 00 01 00 00 00 10 00 00 00 00 00 00 00 ................
00000000004003A0 75 1A 69 09 00 00 02 00 2E 00 00 00 00 00 00 00 u.i.............
;;; Segment .rela.dyn (00000000004003B0)
; 00600FF0   6 00000003 0000000000000000 __libc_start_main (3)
; 00600FF8   6 00000005 0000000000000000 __gmon_start__ (5)
;;; Segment .rela.plt (00000000004003E0)
; 00601018   7 00000001 0000000000000000 free (1)
; 00601020   7 00000002 0000000000000000 puts (2)
; 00601028   7 00000004 0000000000000000 calloc (4)
;;; Segment .init (0000000000400428)

;; fn0000000000400428: 0000000000400428
fn0000000000400428 proc
	sub	rsp,08
	mov	rax,[rip+00200BC5]                                     ; 0000000000600FF8
	test	rax,rax
	jz	000000000040043A

l0000000000400438:
	call	eax

l000000000040043A:
	add	rsp,08
	ret
;;; Segment .plt (0000000000400440)
0000000000400440 FF 35 C2 0B 20 00 FF 25 C4 0B 20 00 0F 1F 40 00 .5.. ..%.. ...@.
0000000000400450 FF 25 C2 0B 20 00                               .%.. .         
0000000000400456                   68 00 00 00 00 E9 E0 FF FF FF       h.........
0000000000400460 FF 25 BA 0B 20 00                               .%.. .         
0000000000400466                   68 01 00 00 00 E9 D0 FF FF FF       h.........
0000000000400470 FF 25 B2 0B 20 00                               .%.. .         
0000000000400476                   68 02 00 00 00 E9 C0 FF FF FF       h.........
;;; Segment .text (0000000000400480)

;; fn0000000000400480: 0000000000400480
fn0000000000400480 proc
	xor	ebp,ebp
	mov	r9,rdx
	pop	rsi
	mov	rdx,rsp
	and	rsp,F0
	push	rax
	push	rsp
	mov	r8,+00400780
	mov	rcx,+00400710
	mov	rdi,+00400660
	call	dword ptr [rip+00200B46]                              ; 0000000000600FF0
	hlt
00000000004004AB                                  0F 1F 44 00 00            ..D..

;; fn00000000004004B0: 00000000004004B0
fn00000000004004B0 proc
	push	rbp
	mov	eax,00601040
	cmp	r8,+00601040
	mov	rbp,rsp
	jz	00000000004004D8

l00000000004004C1:
	mov	eax,00000000
	test	rax,rax
	jz	00000000004004D8

l00000000004004CB:
	pop	rbp
	mov	edi,00601040
	jmp	eax
00000000004004D3          0F 1F 44 00 00                            ..D..       

l00000000004004D8:
	pop	rbp
	ret
00000000004004DA                               66 0F 1F 44 00 00           f..D..
00000000004004E0 BE 40 10 60 00 55 48 81 EE 40 10 60 00 48 89 E5 .@.`.UH..@.`.H..
00000000004004F0 48 C1 FE 03 48 89 F0 48 C1 E8 3F 48 01 C6 48 D1 H...H..H..?H..H.
0000000000400500 FE 74 15 B8 00 00 00 00 48 85 C0 74 0B 5D BF 40 .t......H..t.].@
0000000000400510 10 60 00 FF E0 0F 1F 00 5D C3 66 0F 1F 44 00 00 .`......].f..D..
0000000000400520 80 3D 19 0B 20 00 00 75 17 55 48 89 E5 E8 7E FF .=.. ..u.UH...~.
0000000000400530 FF FF C6 05 07 0B 20 00 01 5D C3 0F 1F 44 00 00 ...... ..]...D..
0000000000400540 F3 C3 0F 1F 40 00 66 2E 0F 1F 84 00 00 00 00 00 ....@.f.........
0000000000400550 55 48 89 E5 5D EB 89 66 0F 1F 84 00 00 00 00 00 UH..]..f........

;; fn0000000000400560: 0000000000400560
fn0000000000400560 proc
	push	rbp
	mov	rbp,rsp
	sub	rsp,10
	mov	[rbp-04],edi
	mov	[rbp-08],esi
	movsx	rdi,dword ptr [rbp-04]
	movsx	rsi,dword ptr [rbp-08]
	call	0000000000400470
	mov	[rbp-10],rax
	mov	rax,[rbp-10]
	add	rsp,10
	pop	rbp
	ret
0000000000400589                            0F 1F 80 00 00 00 00          .......
0000000000400590 55 48 89 E5 40 88 F0 BE 01 00 00 00 48 89 7D F8 UH..@.......H.}.
00000000004005A0 88 45 F7 48 8B 7D F8 8A 45 F7 88 07 89 F0 5D C3 .E.H.}..E.....].
00000000004005B0 55 48 89 E5 48 83 EC 20 89 7D F8 89 75 F4 8B 75 UH..H.. .}..u..u
00000000004005C0 F8 3B 75 F4 0F 8D 85 00 00 00 8B 45 F8 C1 E0 01 .;u........E....
00000000004005D0 8B 4D F4 C1 E1 01 39 C8 0F 8D 71 00 00 00 6B 45 .M....9...q...kE
00000000004005E0 F8 03 6B 4D F4 03 39 C8 0F 8D 61 00 00 00 8B 45 ..kM..9...a....E
00000000004005F0 F8 C1 E0 02 8B 4D F4 C1 E1 02 39 C8 0F 8D 4D 00 .....M....9...M.
0000000000400600 00 00 B8 02 00 00 00 8B 4D F8 89 45 E4 89 C8 99 ........M..E....
0000000000400610 8B 4D E4 F7 F9 8B 75 F4 89 45 E0 89 F0 99 F7 F9 .M....u..E......
0000000000400620 8B 75 E0 39 C6 0F 8D 24 00 00 00 8B 7D F8 8B 75 .u.9...$....}..u
0000000000400630 F4 E8 2A FF FF FF 48 89 45 E8 48 8B 7D E8 E8 0D ..*...H.E.H.}...
0000000000400640 FE FF FF C7 45 FC 00 00 00 00 E9 07 00 00 00 C7 ....E...........
0000000000400650 45 FC FF FF FF FF 8B 45 FC 48 83 C4 20 5D C3 90 E......E.H.. ]..
0000000000400660 55 48 89 E5 48 83 EC 40 48 8D 45 E0 C7 45 FC 00 UH..H..@H.E..E..
0000000000400670 00 00 00 89 7D F8 48 89 75 F0 48 8B 34 25 98 07 ....}.H.u.H.4%..
0000000000400680 40 00 48 89 75 E0 48 8B 34 25 A0 07 40 00 48 89 @.H.u.H.4%..@.H.
0000000000400690 75 E8 48 89 45 D8 48 8B 45 D8 4C 8B 18 BF 01 00 u.H.E.H.E.L.....
00000000004006A0 00 00 BE 05 00 00 00 E8 44 00 00 00 48 89 45 D0 ........D...H.E.
00000000004006B0 48 8B 45 D8 4C 8B 58 08 48 8B 7D D0 BE 78 00 00 H.E.L.X.H.}..x..
00000000004006C0 00 E8 2A 00 00 00 BE A8 07 40 00 89 F7 89 45 CC ..*......@....E.
00000000004006D0 E8 8B FD FF FF 48 8B 7D D0 89 45 C8 E8 6F FD FF .....H.}..E..o..
00000000004006E0 FF 31 C0 48 83 C4 40 5D C3 0F 1F 80 00 00 00 00 .1.H..@]........

;; fn00000000004006F0: 00000000004006F0
fn00000000004006F0 proc
	call	0000000000400700

l00000000004006F5:
	pause
	jmp	00000000004006F5
00000000004006FC                                     0F 1F 40 00             ..@.

;; fn0000000000400700: 0000000000400700
fn0000000000400700 proc
	mov	[rsp],r11
	ret
0000000000400705                66 2E 0F 1F 84 00 00 00 00 00 90      f..........
0000000000400710 41 57 41 56 41 89 FF 41 55 41 54 4C 8D 25 EE 06 AWAVA..AUATL.%..
0000000000400720 20 00 55 48 8D 2D EE 06 20 00 53 49 89 F6 49 89  .UH.-.. .SI..I.
0000000000400730 D5 4C 29 E5 48 83 EC 08 48 C1 FD 03 E8 E7 FC FF .L).H...H.......
0000000000400740 FF 48 85 ED 74 20 31 DB 0F 1F 84 00 00 00 00 00 .H..t 1.........
0000000000400750 4C 89 EA 4C 89 F6 44 89 FF 41 FF 14 DC 48 83 C3 L..L..D..A...H..
0000000000400760 01 48 39 DD 75 EA 48 83 C4 08 5B 5D 41 5C 41 5D .H9.u.H...[]A\A]
0000000000400770 41 5E 41 5F C3 90 66 2E 0F 1F 84 00 00 00 00 00 A^A_..f.........
0000000000400780 F3 C3                                           ..             
;;; Segment .fini (0000000000400784)
0000000000400784             48 83 EC 08 48 83 C4 08 C3              H...H....  
;;; Segment .rodata (0000000000400790)
0000000000400790 01 00 02 00 00 00 00 00 60 05 40 00 00 00 00 00 ........`.@.....
00000000004007A0 90 05 40 00 00 00 00 00 64 6F 6E 65 0A 00       ..@.....done.. 
;;; Segment .eh_frame_hdr (00000000004007B0)
00000000004007B0 01 1B 03 3B 4C 00 00 00 08 00 00 00 90 FC FF FF ...;L...........
00000000004007C0 98 00 00 00 D0 FC FF FF 68 00 00 00 B0 FD FF FF ........h.......
00000000004007D0 C0 00 00 00 E0 FD FF FF DC 00 00 00 00 FE FF FF ................
00000000004007E0 F8 00 00 00 B0 FE FF FF 14 01 00 00 60 FF FF FF ............`...
00000000004007F0 30 01 00 00 D0 FF FF FF 78 01 00 00             0.......x...   
;;; Segment .eh_frame (0000000000400800)
0000000000400800 14 00 00 00 00 00 00 00 01 7A 52 00 01 78 10 01 .........zR..x..
0000000000400810 1B 0C 07 08 90 01 07 10 14 00 00 00 1C 00 00 00 ................
0000000000400820 60 FC FF FF 2B 00 00 00 00 00 00 00 00 00 00 00 `...+...........
0000000000400830 14 00 00 00 00 00 00 00 01 7A 52 00 01 78 10 01 .........zR..x..
0000000000400840 1B 0C 07 08 90 01 00 00 24 00 00 00 1C 00 00 00 ........$.......
0000000000400850 F0 FB FF FF 40 00 00 00 00 0E 10 46 0E 18 4A 0F ....@......F..J.
0000000000400860 0B 77 08 80 00 3F 1A 3B 2A 33 24 22 00 00 00 00 .w...?.;*3$"....
0000000000400870 18 00 00 00 44 00 00 00 E8 FC FF FF 29 00 00 00 ....D.......)...
0000000000400880 00 41 0E 10 86 02 43 0D 06 00 00 00 18 00 00 00 .A....C.........
0000000000400890 60 00 00 00 FC FC FF FF 20 00 00 00 00 41 0E 10 `....... ....A..
00000000004008A0 86 02 43 0D 06 00 00 00 18 00 00 00 7C 00 00 00 ..C.........|...
00000000004008B0 00 FD FF FF AF 00 00 00 00 41 0E 10 86 02 43 0D .........A....C.
00000000004008C0 06 00 00 00 18 00 00 00 98 00 00 00 94 FD FF FF ................
00000000004008D0 89 00 00 00 00 41 0E 10 86 02 43 0D 06 00 00 00 .....A....C.....
00000000004008E0 44 00 00 00 B4 00 00 00 28 FE FF FF 65 00 00 00 D.......(...e...
00000000004008F0 00 42 0E 10 8F 02 42 0E 18 8E 03 45 0E 20 8D 04 .B....B....E. ..
0000000000400900 42 0E 28 8C 05 48 0E 30 86 06 48 0E 38 83 07 4D B.(..H.0..H.8..M
0000000000400910 0E 40 72 0E 38 41 0E 30 41 0E 28 42 0E 20 42 0E .@r.8A.0A.(B. B.
0000000000400920 18 42 0E 10 42 0E 08 00 10 00 00 00 FC 00 00 00 .B..B...........
0000000000400930 50 FE FF FF 02 00 00 00 00 00 00 00 00 00 00 00 P...............
;;; Segment .init_array (0000000000600E10)
0000000000600E10 50 05 40 00 00 00 00 00                         P.@.....       
;;; Segment .fini_array (0000000000600E18)
0000000000600E18                         20 05 40 00 00 00 00 00          .@.....
;;; Segment .dynamic (0000000000600E20)
; DT_NEEDED       libc.so.6
; DT_INIT         0000000000400428
; DT_DEBUG        0000000000400784
; DT_INIT_ARRAY   0000000000600E10
; DT_INIT_ARRAYSZ 0000000000000008
; DT_FINI_ARRAY   0000000000600E18
; DT_FINI_ARRAYSZ 0000000000000008
; DT_HASH         0000000000400278
; DT_STRTAB       0000000000400338
; DT_SYMTAB       00000000004002A8
; DT_STRSZ        0000000000000049
; DT_SYMENT                     24
; DT_DEBUG        0000000000000000
; DT_PLTGOT       0000000000601000
; DT_PLTRELSZ                   72
; DT_PLTREL       0000000000000007
; DT_JMPREL       00000000004003E0
; DT_RELA         00000000004003B0
; DT_RELASZ                     48
; DT_RELAENT                    24
; 6FFFFFFE        0000000000400390
; 6FFFFFFF        0000000000000001
; 6FFFFFF0        0000000000400382
;;; Segment .got (0000000000600FF0)
__libc_start_main_GOT		; 0000000000600FF0
	dq	0x0000000000000000
__gmon_start___GOT		; 0000000000600FF8
	dq	0x0000000000000000
;;; Segment .got.plt (0000000000601000)
0000000000601000 20 0E 60 00 00 00 00 00 00 00 00 00 00 00 00 00  .`.............
0000000000601010 00 00 00 00 00 00 00 00                         ........       
free_GOT		; 0000000000601018
	dq	0x0000000000400456
puts_GOT		; 0000000000601020
	dq	0x0000000000400466
calloc_GOT		; 0000000000601028
	dq	0x0000000000400476
;;; Segment .data (0000000000601030)
0000000000601030 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
;;; Segment .bss (0000000000601040)
0000000000601040 00 00 00 00 00 00 00 00                         ........       
