__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
    .balign 4
jtbl_1000D4E0:
    # 0045CB3C expinalter
    .gpword .L0045CB8C
    .gpword .L0045CB8C
    .gpword .L0045CB94
    .gpword .L0045CB94
    .gpword .L0045CB94
    .gpword .L0045CB94
    .gpword .L0045CBB4
    .gpword .L0045CB8C

RO_1000D500:
    # 0045CBDC cupaltered
    .asciz "uoptprep.p"

    .balign 4
jtbl_1000D50C:
    # 0045CBDC cupaltered
    .gpword .L0045CC3C
    .gpword .L0045CC3C
    .gpword .L0045CC4C
    .gpword .L0045CC6C
    .gpword .L0045CC44
    .gpword .L0045CC4C
    .gpword .L0045CD40
    .gpword .L0045CC3C

RO_1000D52C:
    # 0045CD78 expaltered
    .asciz "uoptprep.p"

    .balign 4
jtbl_1000D538:
    # 0045CD78 expaltered
    .gpword .L0045CDCC
    .gpword .L0045CDCC
    .gpword .L0045CDDC
    .gpword .L0045CFBC
    .gpword .L0045CDD4
    .gpword .L0045CDDC
    .gpword .L0045D1D0
    .gpword .L0045CDCC

.data
D_10010D40:
    # 0045C8A0 lvalaltered
    .byte 0x00,0x00,0x01,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00

D_10010D54:
    # 0045CAA0 lvalantloc
    .byte 0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10

D_10010D60:
    # 0045CBDC cupaltered
    .byte 0x00,0x03,0x9e,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x20

D_10010D70:
    # 0045CD78 expaltered
    .byte 0x00,0x03,0x9e,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x20

D_10010D80:
    # 0045CD78 expaltered
    .byte 0x00,0x00,0x01,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00

D_10010D94:
    # 0045D208 patchvectors
    .byte 0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10

D_10010DA0:
    # 0045D208 patchvectors
    .byte 0x00,0x00,0x81,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00

D_10010DB4:
    # 0045D208 patchvectors
    .byte 0x00,0x00,0x01,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text

glabel lvalaltered
    .ent lvalaltered
    # 004122D8 vardelete
/* 0045C8A0 3C1C0FBC */  .cpload $t9
/* 0045C8A4 279CD9F0 */  
/* 0045C8A8 0399E021 */  
/* 0045C8AC 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0045C8B0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0045C8B4 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0045C8B8 AFB00014 */  sw    $s0, 0x14($sp)
/* 0045C8BC AFA50034 */  sw    $a1, 0x34($sp)
/* 0045C8C0 8CA20024 */  lw    $v0, 0x24($a1)
/* 0045C8C4 00808025 */  move  $s0, $a0
/* 0045C8C8 00003825 */  move  $a3, $zero
/* 0045C8CC 1040000F */  beqz  $v0, .L0045C90C
/* 0045C8D0 24030002 */   li    $v1, 2
/* 0045C8D4 904F0009 */  lbu   $t7, 9($v0)
.L0045C8D8:
/* 0045C8D8 546F0008 */  bnel  $v1, $t7, .L0045C8FC
/* 0045C8DC 8C420004 */   lw    $v0, 4($v0)
/* 0045C8E0 8C58000C */  lw    $t8, 0xc($v0)
/* 0045C8E4 8F190014 */  lw    $t9, 0x14($t8)
/* 0045C8E8 56190004 */  bnel  $s0, $t9, .L0045C8FC
/* 0045C8EC 8C420004 */   lw    $v0, 4($v0)
/* 0045C8F0 10000002 */  b     .L0045C8FC
/* 0045C8F4 24070001 */   li    $a3, 1
/* 0045C8F8 8C420004 */  lw    $v0, 4($v0)
.L0045C8FC:
/* 0045C8FC 54E00004 */  bnezl $a3, .L0045C910
/* 0045C900 92080019 */   lbu   $t0, 0x19($s0)
/* 0045C904 5440FFF4 */  bnezl $v0, .L0045C8D8
/* 0045C908 904F0009 */   lbu   $t7, 9($v0)
.L0045C90C:
/* 0045C90C 92080019 */  lbu   $t0, 0x19($s0)
.L0045C910:
/* 0045C910 15000010 */  bnez  $t0, .L0045C954
/* 0045C914 00000000 */   nop   
/* 0045C918 14E0000E */  bnez  $a3, .L0045C954
/* 0045C91C 00000000 */   nop   
/* 0045C920 8F848B78 */  lw     $a0, %got(gsptr)($gp)
/* 0045C924 8E090008 */  lw    $t1, 8($s0)
/* 0045C928 8FAA0034 */  lw    $t2, 0x34($sp)
/* 0045C92C 8C840000 */  lw    $a0, ($a0)
/* 0045C930 8F9983D0 */  lw    $t9, %call16(strlant)($gp)
/* 0045C934 AC890004 */  sw    $t1, 4($a0)
/* 0045C938 8D450028 */  lw    $a1, 0x28($t2)
/* 0045C93C 0320F809 */  jalr  $t9
/* 0045C940 A3A70027 */   sb    $a3, 0x27($sp)
/* 0045C944 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045C948 14400002 */  bnez  $v0, .L0045C954
/* 0045C94C 93A70027 */   lbu   $a3, 0x27($sp)
/* 0045C950 24070001 */  li    $a3, 1
.L0045C954:
/* 0045C954 14E0004D */  bnez  $a3, .L0045CA8C
/* 0045C958 8FAB0034 */   lw    $t3, 0x34($sp)
/* 0045C95C 8D620020 */  lw    $v0, 0x20($t3)
/* 0045C960 24010010 */  li    $at, 16
/* 0045C964 90430000 */  lbu   $v1, ($v0)
/* 0045C968 54610027 */  bnel  $v1, $at, .L0045CA08
/* 0045C96C 2C7900A0 */   sltiu $t9, $v1, 0xa0
/* 0045C970 8F8C8A5C */  lw     $t4, %got(lang)($gp)
/* 0045C974 24010003 */  li    $at, 3
/* 0045C978 918C0000 */  lbu   $t4, ($t4)
/* 0045C97C 55810004 */  bnel  $t4, $at, .L0045C990
/* 0045C980 904D0018 */   lbu   $t5, 0x18($v0)
/* 0045C984 10000041 */  b     .L0045CA8C
/* 0045C988 24070001 */   li    $a3, 1
/* 0045C98C 904D0018 */  lbu   $t5, 0x18($v0)
.L0045C990:
/* 0045C990 31AE0001 */  andi  $t6, $t5, 1
/* 0045C994 51C0000F */  beql  $t6, $zero, .L0045C9D4
/* 0045C998 8FAF0034 */   lw    $t7, 0x34($sp)
/* 0045C99C 8F9983A4 */  lw    $t9, %call16(clkilled)($gp)
/* 0045C9A0 8F84897C */  lw     $a0, %got(curlevel)($gp)
/* 0045C9A4 8F858B70 */  lw     $a1, %got(indirprocs)($gp)
/* 0045C9A8 8E060008 */  lw    $a2, 8($s0)
/* 0045C9AC A3A70027 */  sb    $a3, 0x27($sp)
/* 0045C9B0 8C840000 */  lw    $a0, ($a0)
/* 0045C9B4 0320F809 */  jalr  $t9
/* 0045C9B8 8CA50000 */   lw    $a1, ($a1)
/* 0045C9BC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045C9C0 10400003 */  beqz  $v0, .L0045C9D0
/* 0045C9C4 93A70027 */   lbu   $a3, 0x27($sp)
/* 0045C9C8 10000030 */  b     .L0045CA8C
/* 0045C9CC 24070001 */   li    $a3, 1
.L0045C9D0:
/* 0045C9D0 8FAF0034 */  lw    $t7, 0x34($sp)
.L0045C9D4:
/* 0045C9D4 8F9983B8 */  lw    $t9, %call16(listplkilled)($gp)
/* 0045C9D8 8E050008 */  lw    $a1, 8($s0)
/* 0045C9DC 8DF80020 */  lw    $t8, 0x20($t7)
/* 0045C9E0 92060019 */  lbu   $a2, 0x19($s0)
/* 0045C9E4 8F040028 */  lw    $a0, 0x28($t8)
/* 0045C9E8 0320F809 */  jalr  $t9
/* 0045C9EC A3A70027 */   sb    $a3, 0x27($sp)
/* 0045C9F0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045C9F4 10400025 */  beqz  $v0, .L0045CA8C
/* 0045C9F8 93A70027 */   lbu   $a3, 0x27($sp)
/* 0045C9FC 10000023 */  b     .L0045CA8C
/* 0045CA00 24070001 */   li    $a3, 1
/* 0045CA04 2C7900A0 */  sltiu $t9, $v1, 0xa0
.L0045CA08:
/* 0045CA08 13200009 */  beqz  $t9, .L0045CA30
/* 0045CA0C 00000000 */   nop   
/* 0045CA10 8F8A8044 */  lw    $t2, %got(D_10010D40)($gp)
/* 0045CA14 00034143 */  sra   $t0, $v1, 5
/* 0045CA18 00084880 */  sll   $t1, $t0, 2
/* 0045CA1C 254A0D40 */  addiu $t2, %lo(D_10010D40) # addiu $t2, $t2, 0xd40
/* 0045CA20 01495821 */  addu  $t3, $t2, $t1
/* 0045CA24 8D6C0000 */  lw    $t4, ($t3)
/* 0045CA28 006C6804 */  sllv  $t5, $t4, $v1
/* 0045CA2C 29B90000 */  slti  $t9, $t5, 0
.L0045CA30:
/* 0045CA30 53200017 */  beql  $t9, $zero, .L0045CA90
/* 0045CA34 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0045CA38 8F9983A4 */  lw    $t9, %call16(clkilled)($gp)
/* 0045CA3C 90440019 */  lbu   $a0, 0x19($v0)
/* 0045CA40 8C450014 */  lw    $a1, 0x14($v0)
/* 0045CA44 8E060008 */  lw    $a2, 8($s0)
/* 0045CA48 0320F809 */  jalr  $t9
/* 0045CA4C A3A70027 */   sb    $a3, 0x27($sp)
/* 0045CA50 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045CA54 1440000C */  bnez  $v0, .L0045CA88
/* 0045CA58 93A70027 */   lbu   $a3, 0x27($sp)
/* 0045CA5C 8FAF0034 */  lw    $t7, 0x34($sp)
/* 0045CA60 8F9983B8 */  lw    $t9, %call16(listplkilled)($gp)
/* 0045CA64 8E050008 */  lw    $a1, 8($s0)
/* 0045CA68 8DF80020 */  lw    $t8, 0x20($t7)
/* 0045CA6C 92060019 */  lbu   $a2, 0x19($s0)
/* 0045CA70 8F040024 */  lw    $a0, 0x24($t8)
/* 0045CA74 0320F809 */  jalr  $t9
/* 0045CA78 A3A70027 */   sb    $a3, 0x27($sp)
/* 0045CA7C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045CA80 10400002 */  beqz  $v0, .L0045CA8C
/* 0045CA84 93A70027 */   lbu   $a3, 0x27($sp)
.L0045CA88:
/* 0045CA88 24070001 */  li    $a3, 1
.L0045CA8C:
/* 0045CA8C 8FBF001C */  lw    $ra, 0x1c($sp)
.L0045CA90:
/* 0045CA90 8FB00014 */  lw    $s0, 0x14($sp)
/* 0045CA94 27BD0030 */  addiu $sp, $sp, 0x30
/* 0045CA98 03E00008 */  jr    $ra
/* 0045CA9C 00E01025 */   move  $v0, $a3
    .type lvalaltered, @function
    .size lvalaltered, .-lvalaltered
    .end lvalaltered

glabel lvalantloc
    .ent lvalantloc
    # 004122D8 vardelete
/* 0045CAA0 8CA20024 */  lw    $v0, 0x24($a1)
/* 0045CAA4 00803025 */  move  $a2, $a0
/* 0045CAA8 00001825 */  move  $v1, $zero
/* 0045CAAC 10400021 */  beqz  $v0, .L0045CB34
/* 0045CAB0 24070001 */   li    $a3, 1
/* 0045CAB4 904E0009 */  lbu   $t6, 9($v0)
.L0045CAB8:
/* 0045CAB8 54EE001A */  bnel  $a3, $t6, .L0045CB24
/* 0045CABC 8C420004 */   lw    $v0, 4($v0)
/* 0045CAC0 8C44000C */  lw    $a0, 0xc($v0)
/* 0045CAC4 908F0000 */  lbu   $t7, ($a0)
/* 0045CAC8 25F8FFE0 */  addiu $t8, $t7, -0x20
/* 0045CACC 2F190060 */  sltiu $t9, $t8, 0x60
/* 0045CAD0 13200009 */  beqz  $t9, .L0045CAF8
/* 0045CAD4 00000000 */   nop   
/* 0045CAD8 8F8A8044 */  lw    $t2, %got(D_10010D54)($gp)
/* 0045CADC 00184143 */  sra   $t0, $t8, 5
/* 0045CAE0 00084880 */  sll   $t1, $t0, 2
/* 0045CAE4 254A0D54 */  addiu $t2, %lo(D_10010D54) # addiu $t2, $t2, 0xd54
/* 0045CAE8 01495821 */  addu  $t3, $t2, $t1
/* 0045CAEC 8D6C0000 */  lw    $t4, ($t3)
/* 0045CAF0 030C6804 */  sllv  $t5, $t4, $t8
/* 0045CAF4 29B90000 */  slti  $t9, $t5, 0
.L0045CAF8:
/* 0045CAF8 5320000A */  beql  $t9, $zero, .L0045CB24
/* 0045CAFC 8C420004 */   lw    $v0, 4($v0)
/* 0045CB00 8C850004 */  lw    $a1, 4($a0)
/* 0045CB04 50A00007 */  beql  $a1, $zero, .L0045CB24
/* 0045CB08 8C420004 */   lw    $v0, 4($v0)
/* 0045CB0C 8CAF0014 */  lw    $t7, 0x14($a1)
/* 0045CB10 54CF0004 */  bnel  $a2, $t7, .L0045CB24
/* 0045CB14 8C420004 */   lw    $v0, 4($v0)
/* 0045CB18 10000002 */  b     .L0045CB24
/* 0045CB1C 30E300FF */   andi  $v1, $a3, 0xff
/* 0045CB20 8C420004 */  lw    $v0, 4($v0)
.L0045CB24:
/* 0045CB24 14600003 */  bnez  $v1, .L0045CB34
/* 0045CB28 00000000 */   nop   
/* 0045CB2C 5440FFE2 */  bnezl $v0, .L0045CAB8
/* 0045CB30 904E0009 */   lbu   $t6, 9($v0)
.L0045CB34:
/* 0045CB34 03E00008 */  jr    $ra
/* 0045CB38 00601025 */   move  $v0, $v1
    .type lvalantloc, @function
    .size lvalantloc, .-lvalantloc
    .end lvalantloc

glabel expinalter
    .ent expinalter
    # 0041550C func_0041550C
    # 004175BC copypropagate
    # 0045CD78 expaltered
    # 0045D208 patchvectors
/* 0045CB3C 3C1C0FBC */  .cpload $t9
/* 0045CB40 279CD754 */  
/* 0045CB44 0399E021 */  
/* 0045CB48 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0045CB4C AFBF001C */  sw    $ra, 0x1c($sp)
/* 0045CB50 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0045CB54 90820000 */  lbu   $v0, ($a0)
/* 0045CB58 00803025 */  move  $a2, $a0
/* 0045CB5C 00A03825 */  move  $a3, $a1
/* 0045CB60 244EFFFF */  addiu $t6, $v0, -1
/* 0045CB64 2DC10008 */  sltiu $at, $t6, 8
/* 0045CB68 10200012 */  beqz  $at, .L0045CBB4
/* 0045CB6C 00000000 */   nop   
/* 0045CB70 8F818044 */  lw    $at, %got(jtbl_1000D4E0)($gp)
/* 0045CB74 000E7080 */  sll   $t6, $t6, 2
/* 0045CB78 002E0821 */  addu  $at, $at, $t6
/* 0045CB7C 8C2ED4E0 */  lw    $t6, %lo(jtbl_1000D4E0)($at)
/* 0045CB80 01DC7021 */  addu  $t6, $t6, $gp
/* 0045CB84 01C00008 */  jr    $t6
/* 0045CB88 00000000 */   nop   
.L0045CB8C:
/* 0045CB8C 1000000E */  b     .L0045CBC8
/* 0045CB90 A3A00027 */   sb    $zero, 0x27($sp)
.L0045CB94:
/* 0045CB94 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0045CB98 94C40002 */  lhu   $a0, 2($a2)
/* 0045CB9C 24E5010C */  addiu $a1, $a3, 0x10c
/* 0045CBA0 0320F809 */  jalr  $t9
/* 0045CBA4 00000000 */   nop   
/* 0045CBA8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045CBAC 10000006 */  b     .L0045CBC8
/* 0045CBB0 A3A20027 */   sb    $v0, 0x27($sp)
.L0045CBB4:
/* 0045CBB4 8F99861C */  lw    $t9, %call16(dbgerror)($gp)
/* 0045CBB8 2404019E */  li    $a0, 414
/* 0045CBBC 0320F809 */  jalr  $t9
/* 0045CBC0 00000000 */   nop   
/* 0045CBC4 8FBC0018 */  lw    $gp, 0x18($sp)
.L0045CBC8:
/* 0045CBC8 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0045CBCC 93A20027 */  lbu   $v0, 0x27($sp)
/* 0045CBD0 27BD0028 */  addiu $sp, $sp, 0x28
/* 0045CBD4 03E00008 */  jr    $ra
/* 0045CBD8 00000000 */   nop   
    .type expinalter, @function
    .size expinalter, .-expinalter
    .end expinalter

glabel cupaltered
    .ent cupaltered
    # 00431508 func_00431508
    # 004324F4 findinduct
    # 00455060 func_00455060
    # 0045CBDC cupaltered
    # 0045CD78 expaltered
/* 0045CBDC 3C1C0FBC */  .cpload $t9
/* 0045CBE0 279CD6B4 */  
/* 0045CBE4 0399E021 */  
/* 0045CBE8 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0045CBEC AFB1001C */  sw    $s1, 0x1c($sp)
/* 0045CBF0 AFB00018 */  sw    $s0, 0x18($sp)
/* 0045CBF4 00A08025 */  move  $s0, $a1
/* 0045CBF8 00C08825 */  move  $s1, $a2
/* 0045CBFC AFBF0024 */  sw    $ra, 0x24($sp)
/* 0045CC00 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0045CC04 00803825 */  move  $a3, $a0
.L0045CC08:
/* 0045CC08 90E20000 */  lbu   $v0, ($a3)
/* 0045CC0C 00E01825 */  move  $v1, $a3
/* 0045CC10 244EFFFF */  addiu $t6, $v0, -1
/* 0045CC14 2DC10008 */  sltiu $at, $t6, 8
/* 0045CC18 10200049 */  beqz  $at, .L0045CD40
/* 0045CC1C 00000000 */   nop   
/* 0045CC20 8F818044 */  lw    $at, %got(jtbl_1000D50C)($gp)
/* 0045CC24 000E7080 */  sll   $t6, $t6, 2
/* 0045CC28 002E0821 */  addu  $at, $at, $t6
/* 0045CC2C 8C2ED50C */  lw    $t6, %lo(jtbl_1000D50C)($at)
/* 0045CC30 01DC7021 */  addu  $t6, $t6, $gp
/* 0045CC34 01C00008 */  jr    $t6
/* 0045CC38 00000000 */   nop   
.L0045CC3C:
/* 0045CC3C 10000048 */  b     .L0045CD60
/* 0045CC40 A3A0002F */   sb    $zero, 0x2f($sp)
.L0045CC44:
/* 0045CC44 1000FFF0 */  b     .L0045CC08
/* 0045CC48 8C670020 */   lw    $a3, 0x20($v1)
.L0045CC4C:
/* 0045CC4C 8F9983A4 */  lw    $t9, %call16(clkilled)($gp)
/* 0045CC50 02002025 */  move  $a0, $s0
/* 0045CC54 02202825 */  move  $a1, $s1
/* 0045CC58 0320F809 */  jalr  $t9
/* 0045CC5C 8CE60008 */   lw    $a2, 8($a3)
/* 0045CC60 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0045CC64 1000003E */  b     .L0045CD60
/* 0045CC68 A3A2002F */   sb    $v0, 0x2f($sp)
.L0045CC6C:
/* 0045CC6C 8F9984AC */  lw    $t9, %call16(cupaltered)($gp)
/* 0045CC70 8CE40014 */  lw    $a0, 0x14($a3)
/* 0045CC74 02002825 */  move  $a1, $s0
/* 0045CC78 02203025 */  move  $a2, $s1
/* 0045CC7C 0320F809 */  jalr  $t9
/* 0045CC80 AFA70030 */   sw    $a3, 0x30($sp)
/* 0045CC84 304300FF */  andi  $v1, $v0, 0xff
/* 0045CC88 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0045CC8C 14600012 */  bnez  $v1, .L0045CCD8
/* 0045CC90 8FA70030 */   lw    $a3, 0x30($sp)
/* 0045CC94 90EF0010 */  lbu   $t7, 0x10($a3)
/* 0045CC98 8F998DBC */  lw     $t9, %got(optab)($gp)
/* 0045CC9C 02002825 */  move  $a1, $s0
/* 0045CCA0 000FC080 */  sll   $t8, $t7, 2
/* 0045CCA4 030FC023 */  subu  $t8, $t8, $t7
/* 0045CCA8 03194021 */  addu  $t0, $t8, $t9
/* 0045CCAC 91090002 */  lbu   $t1, 2($t0)
/* 0045CCB0 5120000A */  beql  $t1, $zero, .L0045CCDC
/* 0045CCB4 90EA0010 */   lbu   $t2, 0x10($a3)
/* 0045CCB8 8F9984AC */  lw    $t9, %call16(cupaltered)($gp)
/* 0045CCBC 8CE40018 */  lw    $a0, 0x18($a3)
/* 0045CCC0 02203025 */  move  $a2, $s1
/* 0045CCC4 0320F809 */  jalr  $t9
/* 0045CCC8 AFA70030 */   sw    $a3, 0x30($sp)
/* 0045CCCC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0045CCD0 8FA70030 */  lw    $a3, 0x30($sp)
/* 0045CCD4 304300FF */  andi  $v1, $v0, 0xff
.L0045CCD8:
/* 0045CCD8 90EA0010 */  lbu   $t2, 0x10($a3)
.L0045CCDC:
/* 0045CCDC 254BFFE0 */  addiu $t3, $t2, -0x20
/* 0045CCE0 2D6C0080 */  sltiu $t4, $t3, 0x80
/* 0045CCE4 11800009 */  beqz  $t4, .L0045CD0C
/* 0045CCE8 00000000 */   nop   
/* 0045CCEC 8F8F8044 */  lw    $t7, %got(D_10010D60)($gp)
/* 0045CCF0 000B6943 */  sra   $t5, $t3, 5
/* 0045CCF4 000D7080 */  sll   $t6, $t5, 2
/* 0045CCF8 25EF0D60 */  addiu $t7, %lo(D_10010D60) # addiu $t7, $t7, 0xd60
/* 0045CCFC 01EEC021 */  addu  $t8, $t7, $t6
/* 0045CD00 8F190000 */  lw    $t9, ($t8)
/* 0045CD04 01794004 */  sllv  $t0, $t9, $t3
/* 0045CD08 290C0000 */  slti  $t4, $t0, 0
.L0045CD0C:
/* 0045CD0C 1180000A */  beqz  $t4, .L0045CD38
/* 0045CD10 00000000 */   nop   
/* 0045CD14 14600008 */  bnez  $v1, .L0045CD38
/* 0045CD18 00000000 */   nop   
/* 0045CD1C 8F9983A4 */  lw    $t9, %call16(clkilled)($gp)
/* 0045CD20 02002025 */  move  $a0, $s0
/* 0045CD24 02202825 */  move  $a1, $s1
/* 0045CD28 0320F809 */  jalr  $t9
/* 0045CD2C 8CE60008 */   lw    $a2, 8($a3)
/* 0045CD30 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0045CD34 304300FF */  andi  $v1, $v0, 0xff
.L0045CD38:
/* 0045CD38 10000009 */  b     .L0045CD60
/* 0045CD3C A3A3002F */   sb    $v1, 0x2f($sp)
.L0045CD40:
/* 0045CD40 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0045CD44 8F868044 */  lw    $a2, %got(RO_1000D500)($gp)
/* 0045CD48 24040001 */  li    $a0, 1
/* 0045CD4C 24050065 */  li    $a1, 101
/* 0045CD50 2407000A */  li    $a3, 10
/* 0045CD54 0320F809 */  jalr  $t9
/* 0045CD58 24C6D500 */   addiu $a2, %lo(RO_1000D500) # addiu $a2, $a2, -0x2b00
/* 0045CD5C 8FBC0020 */  lw    $gp, 0x20($sp)
.L0045CD60:
/* 0045CD60 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0045CD64 93A2002F */  lbu   $v0, 0x2f($sp)
/* 0045CD68 8FB00018 */  lw    $s0, 0x18($sp)
/* 0045CD6C 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0045CD70 03E00008 */  jr    $ra
/* 0045CD74 27BD0030 */   addiu $sp, $sp, 0x30
    .type cupaltered, @function
    .size cupaltered, .-cupaltered
    .end cupaltered

glabel expaltered
    .ent expaltered
    # 004175BC copypropagate
    # 0045D208 patchvectors
/* 0045CD78 3C1C0FBC */  .cpload $t9
/* 0045CD7C 279CD518 */  
/* 0045CD80 0399E021 */  
/* 0045CD84 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0045CD88 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0045CD8C AFBC0018 */  sw    $gp, 0x18($sp)
/* 0045CD90 AFB00014 */  sw    $s0, 0x14($sp)
/* 0045CD94 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0045CD98 90820000 */  lbu   $v0, ($a0)
/* 0045CD9C 00808025 */  move  $s0, $a0
/* 0045CDA0 244EFFFF */  addiu $t6, $v0, -1
/* 0045CDA4 2DC10008 */  sltiu $at, $t6, 8
/* 0045CDA8 10200109 */  beqz  $at, .L0045D1D0
/* 0045CDAC 00000000 */   nop   
/* 0045CDB0 8F818044 */  lw    $at, %got(jtbl_1000D538)($gp)
/* 0045CDB4 000E7080 */  sll   $t6, $t6, 2
/* 0045CDB8 002E0821 */  addu  $at, $at, $t6
/* 0045CDBC 8C2ED538 */  lw    $t6, %lo(jtbl_1000D538)($at)
/* 0045CDC0 01DC7021 */  addu  $t6, $t6, $gp
/* 0045CDC4 01C00008 */  jr    $t6
/* 0045CDC8 00000000 */   nop   
.L0045CDCC:
/* 0045CDCC 10000109 */  b     .L0045D1F4
/* 0045CDD0 00001825 */   move  $v1, $zero
.L0045CDD4:
/* 0045CDD4 10000107 */  b     .L0045D1F4
/* 0045CDD8 00001825 */   move  $v1, $zero
.L0045CDDC:
/* 0045CDDC 920F001A */  lbu   $t7, 0x1a($s0)
/* 0045CDE0 51E00004 */  beql  $t7, $zero, .L0045CDF4
/* 0045CDE4 92180019 */   lbu   $t8, 0x19($s0)
/* 0045CDE8 10000102 */  b     .L0045D1F4
/* 0045CDEC 24030001 */   li    $v1, 1
/* 0045CDF0 92180019 */  lbu   $t8, 0x19($s0)
.L0045CDF4:
/* 0045CDF4 00004025 */  move  $t0, $zero
/* 0045CDF8 1700000A */  bnez  $t8, .L0045CE24
/* 0045CDFC 00000000 */   nop   
/* 0045CE00 8FB9002C */  lw    $t9, 0x2c($sp)
/* 0045CE04 8E040008 */  lw    $a0, 8($s0)
/* 0045CE08 8F250024 */  lw    $a1, 0x24($t9)
/* 0045CE0C 8F9983C4 */  lw    $t9, %call16(varkilled)($gp)
/* 0045CE10 0320F809 */  jalr  $t9
/* 0045CE14 00000000 */   nop   
/* 0045CE18 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045CE1C 10000001 */  b     .L0045CE24
/* 0045CE20 304800FF */   andi  $t0, $v0, 0xff
.L0045CE24:
/* 0045CE24 8FA9002C */  lw    $t1, 0x2c($sp)
/* 0045CE28 24010010 */  li    $at, 16
/* 0045CE2C 00003825 */  move  $a3, $zero
/* 0045CE30 8D230020 */  lw    $v1, 0x20($t1)
/* 0045CE34 90620000 */  lbu   $v0, ($v1)
/* 0045CE38 1441002A */  bne   $v0, $at, .L0045CEE4
/* 0045CE3C 2C4F00A0 */   sltiu $t7, $v0, 0xa0
/* 0045CE40 8F8A8A5C */  lw     $t2, %got(lang)($gp)
/* 0045CE44 24010003 */  li    $at, 3
/* 0045CE48 914A0000 */  lbu   $t2, ($t2)
/* 0045CE4C 55410004 */  bnel  $t2, $at, .L0045CE60
/* 0045CE50 906B0018 */   lbu   $t3, 0x18($v1)
/* 0045CE54 10000049 */  b     .L0045CF7C
/* 0045CE58 24070001 */   li    $a3, 1
/* 0045CE5C 906B0018 */  lbu   $t3, 0x18($v1)
.L0045CE60:
/* 0045CE60 02002025 */  move  $a0, $s0
/* 0045CE64 316C0001 */  andi  $t4, $t3, 1
/* 0045CE68 51800010 */  beql  $t4, $zero, .L0045CEAC
/* 0045CE6C 8FAD002C */   lw    $t5, 0x2c($sp)
/* 0045CE70 8F9984AC */  lw    $t9, %call16(cupaltered)($gp)
/* 0045CE74 8F85897C */  lw     $a1, %got(curlevel)($gp)
/* 0045CE78 8F868B70 */  lw     $a2, %got(indirprocs)($gp)
/* 0045CE7C A3A70025 */  sb    $a3, 0x25($sp)
/* 0045CE80 A3A80026 */  sb    $t0, 0x26($sp)
/* 0045CE84 8CA50000 */  lw    $a1, ($a1)
/* 0045CE88 0320F809 */  jalr  $t9
/* 0045CE8C 8CC60000 */   lw    $a2, ($a2)
/* 0045CE90 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045CE94 93A70025 */  lbu   $a3, 0x25($sp)
/* 0045CE98 10400003 */  beqz  $v0, .L0045CEA8
/* 0045CE9C 93A80026 */   lbu   $t0, 0x26($sp)
/* 0045CEA0 10000036 */  b     .L0045CF7C
/* 0045CEA4 24070001 */   li    $a3, 1
.L0045CEA8:
/* 0045CEA8 8FAD002C */  lw    $t5, 0x2c($sp)
.L0045CEAC:
/* 0045CEAC 8F9983B8 */  lw    $t9, %call16(listplkilled)($gp)
/* 0045CEB0 8E050008 */  lw    $a1, 8($s0)
/* 0045CEB4 8DAE0020 */  lw    $t6, 0x20($t5)
/* 0045CEB8 92060019 */  lbu   $a2, 0x19($s0)
/* 0045CEBC 8DC40028 */  lw    $a0, 0x28($t6)
/* 0045CEC0 A3A80026 */  sb    $t0, 0x26($sp)
/* 0045CEC4 0320F809 */  jalr  $t9
/* 0045CEC8 A3A70025 */   sb    $a3, 0x25($sp)
/* 0045CECC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045CED0 93A70025 */  lbu   $a3, 0x25($sp)
/* 0045CED4 10400029 */  beqz  $v0, .L0045CF7C
/* 0045CED8 93A80026 */   lbu   $t0, 0x26($sp)
/* 0045CEDC 10000027 */  b     .L0045CF7C
/* 0045CEE0 24070001 */   li    $a3, 1
.L0045CEE4:
/* 0045CEE4 11E00009 */  beqz  $t7, .L0045CF0C
/* 0045CEE8 02002025 */   move  $a0, $s0
/* 0045CEEC 8F898044 */  lw    $t1, %got(D_10010D80)($gp)
/* 0045CEF0 0002C143 */  sra   $t8, $v0, 5
/* 0045CEF4 0018C880 */  sll   $t9, $t8, 2
/* 0045CEF8 25290D80 */  addiu $t1, %lo(D_10010D80) # addiu $t1, $t1, 0xd80
/* 0045CEFC 01395021 */  addu  $t2, $t1, $t9
/* 0045CF00 8D4B0000 */  lw    $t3, ($t2)
/* 0045CF04 004B6004 */  sllv  $t4, $t3, $v0
/* 0045CF08 298F0000 */  slti  $t7, $t4, 0
.L0045CF0C:
/* 0045CF0C 11E0001B */  beqz  $t7, .L0045CF7C
/* 0045CF10 00000000 */   nop   
/* 0045CF14 8F9984AC */  lw    $t9, %call16(cupaltered)($gp)
/* 0045CF18 90650019 */  lbu   $a1, 0x19($v1)
/* 0045CF1C 8C660014 */  lw    $a2, 0x14($v1)
/* 0045CF20 A3A70025 */  sb    $a3, 0x25($sp)
/* 0045CF24 0320F809 */  jalr  $t9
/* 0045CF28 A3A80026 */   sb    $t0, 0x26($sp)
/* 0045CF2C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045CF30 93A70025 */  lbu   $a3, 0x25($sp)
/* 0045CF34 10400003 */  beqz  $v0, .L0045CF44
/* 0045CF38 93A80026 */   lbu   $t0, 0x26($sp)
/* 0045CF3C 1000000F */  b     .L0045CF7C
/* 0045CF40 24070001 */   li    $a3, 1
.L0045CF44:
/* 0045CF44 8FAE002C */  lw    $t6, 0x2c($sp)
/* 0045CF48 8F9983B8 */  lw    $t9, %call16(listplkilled)($gp)
/* 0045CF4C 8E050008 */  lw    $a1, 8($s0)
/* 0045CF50 8DD80020 */  lw    $t8, 0x20($t6)
/* 0045CF54 92060019 */  lbu   $a2, 0x19($s0)
/* 0045CF58 8F040024 */  lw    $a0, 0x24($t8)
/* 0045CF5C A3A80026 */  sb    $t0, 0x26($sp)
/* 0045CF60 0320F809 */  jalr  $t9
/* 0045CF64 A3A70025 */   sb    $a3, 0x25($sp)
/* 0045CF68 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045CF6C 93A70025 */  lbu   $a3, 0x25($sp)
/* 0045CF70 10400002 */  beqz  $v0, .L0045CF7C
/* 0045CF74 93A80026 */   lbu   $t0, 0x26($sp)
/* 0045CF78 24070001 */  li    $a3, 1
.L0045CF7C:
/* 0045CF7C 10E0000A */  beqz  $a3, .L0045CFA8
/* 0045CF80 8FA4002C */   lw    $a0, 0x2c($sp)
/* 0045CF84 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0045CF88 2484010C */  addiu $a0, $a0, 0x10c
/* 0045CF8C 96050024 */  lhu   $a1, 0x24($s0)
/* 0045CF90 A3A70025 */  sb    $a3, 0x25($sp)
/* 0045CF94 0320F809 */  jalr  $t9
/* 0045CF98 A3A80026 */   sb    $t0, 0x26($sp)
/* 0045CF9C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045CFA0 93A70025 */  lbu   $a3, 0x25($sp)
/* 0045CFA4 93A80026 */  lbu   $t0, 0x26($sp)
.L0045CFA8:
/* 0045CFA8 15000002 */  bnez  $t0, .L0045CFB4
/* 0045CFAC 01001025 */   move  $v0, $t0
/* 0045CFB0 00E01025 */  move  $v0, $a3
.L0045CFB4:
/* 0045CFB4 1000008F */  b     .L0045D1F4
/* 0045CFB8 304300FF */   andi  $v1, $v0, 0xff
.L0045CFBC:
/* 0045CFBC 8F9984A8 */  lw    $t9, %call16(expinalter)($gp)
/* 0045CFC0 8E040014 */  lw    $a0, 0x14($s0)
/* 0045CFC4 8FA5002C */  lw    $a1, 0x2c($sp)
/* 0045CFC8 0320F809 */  jalr  $t9
/* 0045CFCC 00000000 */   nop   
/* 0045CFD0 304900FF */  andi  $t1, $v0, 0xff
/* 0045CFD4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045CFD8 15200010 */  bnez  $t1, .L0045D01C
/* 0045CFDC 304800FF */   andi  $t0, $v0, 0xff
/* 0045CFE0 92190010 */  lbu   $t9, 0x10($s0)
/* 0045CFE4 8F8B8DBC */  lw     $t3, %got(optab)($gp)
/* 0045CFE8 00195080 */  sll   $t2, $t9, 2
/* 0045CFEC 01595023 */  subu  $t2, $t2, $t9
/* 0045CFF0 014B6021 */  addu  $t4, $t2, $t3
/* 0045CFF4 918D0002 */  lbu   $t5, 2($t4)
/* 0045CFF8 51A00009 */  beql  $t5, $zero, .L0045D020
/* 0045CFFC 920F0010 */   lbu   $t7, 0x10($s0)
/* 0045D000 8F9984A8 */  lw    $t9, %call16(expinalter)($gp)
/* 0045D004 8E040018 */  lw    $a0, 0x18($s0)
/* 0045D008 8FA5002C */  lw    $a1, 0x2c($sp)
/* 0045D00C 0320F809 */  jalr  $t9
/* 0045D010 00000000 */   nop   
/* 0045D014 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045D018 304800FF */  andi  $t0, $v0, 0xff
.L0045D01C:
/* 0045D01C 920F0010 */  lbu   $t7, 0x10($s0)
.L0045D020:
/* 0045D020 25EEFFE0 */  addiu $t6, $t7, -0x20
/* 0045D024 2DD80080 */  sltiu $t8, $t6, 0x80
/* 0045D028 13000009 */  beqz  $t8, .L0045D050
/* 0045D02C 00000000 */   nop   
/* 0045D030 8F8A8044 */  lw    $t2, %got(D_10010D70)($gp)
/* 0045D034 000E4943 */  sra   $t1, $t6, 5
/* 0045D038 0009C880 */  sll   $t9, $t1, 2
/* 0045D03C 254A0D70 */  addiu $t2, %lo(D_10010D70) # addiu $t2, $t2, 0xd70
/* 0045D040 01595821 */  addu  $t3, $t2, $t9
/* 0045D044 8D6C0000 */  lw    $t4, ($t3)
/* 0045D048 01CC6804 */  sllv  $t5, $t4, $t6
/* 0045D04C 29B80000 */  slti  $t8, $t5, 0
.L0045D050:
/* 0045D050 1300005D */  beqz  $t8, .L0045D1C8
/* 0045D054 304900FF */   andi  $t1, $v0, 0xff
/* 0045D058 1520005B */  bnez  $t1, .L0045D1C8
/* 0045D05C 00000000 */   nop   
/* 0045D060 8F9983C4 */  lw    $t9, %call16(varkilled)($gp)
/* 0045D064 8FAA002C */  lw    $t2, 0x2c($sp)
/* 0045D068 8E040008 */  lw    $a0, 8($s0)
/* 0045D06C 0320F809 */  jalr  $t9
/* 0045D070 8D450024 */   lw    $a1, 0x24($t2)
/* 0045D074 305900FF */  andi  $t9, $v0, 0xff
/* 0045D078 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045D07C 17200052 */  bnez  $t9, .L0045D1C8
/* 0045D080 304800FF */   andi  $t0, $v0, 0xff
/* 0045D084 8FAB002C */  lw    $t3, 0x2c($sp)
/* 0045D088 24010010 */  li    $at, 16
/* 0045D08C 8D630020 */  lw    $v1, 0x20($t3)
/* 0045D090 90620000 */  lbu   $v0, ($v1)
/* 0045D094 14410029 */  bne   $v0, $at, .L0045D13C
/* 0045D098 2C4900A0 */   sltiu $t1, $v0, 0xa0
/* 0045D09C 8F8C8A5C */  lw     $t4, %got(lang)($gp)
/* 0045D0A0 24010003 */  li    $at, 3
/* 0045D0A4 918C0000 */  lbu   $t4, ($t4)
/* 0045D0A8 55810005 */  bnel  $t4, $at, .L0045D0C0
/* 0045D0AC 906E0018 */   lbu   $t6, 0x18($v1)
/* 0045D0B0 24080001 */  li    $t0, 1
/* 0045D0B4 1000004F */  b     .L0045D1F4
/* 0045D0B8 310300FF */   andi  $v1, $t0, 0xff
/* 0045D0BC 906E0018 */  lbu   $t6, 0x18($v1)
.L0045D0C0:
/* 0045D0C0 02002025 */  move  $a0, $s0
/* 0045D0C4 31CD0001 */  andi  $t5, $t6, 1
/* 0045D0C8 51A0000F */  beql  $t5, $zero, .L0045D108
/* 0045D0CC 8FAF002C */   lw    $t7, 0x2c($sp)
/* 0045D0D0 8F9984AC */  lw    $t9, %call16(cupaltered)($gp)
/* 0045D0D4 8F85897C */  lw     $a1, %got(curlevel)($gp)
/* 0045D0D8 8F868B70 */  lw     $a2, %got(indirprocs)($gp)
/* 0045D0DC A3A80026 */  sb    $t0, 0x26($sp)
/* 0045D0E0 8CA50000 */  lw    $a1, ($a1)
/* 0045D0E4 0320F809 */  jalr  $t9
/* 0045D0E8 8CC60000 */   lw    $a2, ($a2)
/* 0045D0EC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045D0F0 10400004 */  beqz  $v0, .L0045D104
/* 0045D0F4 93A80026 */   lbu   $t0, 0x26($sp)
/* 0045D0F8 24080001 */  li    $t0, 1
/* 0045D0FC 1000003D */  b     .L0045D1F4
/* 0045D100 310300FF */   andi  $v1, $t0, 0xff
.L0045D104:
/* 0045D104 8FAF002C */  lw    $t7, 0x2c($sp)
.L0045D108:
/* 0045D108 8F9983B8 */  lw    $t9, %call16(listplkilled)($gp)
/* 0045D10C 8E050008 */  lw    $a1, 8($s0)
/* 0045D110 8DF80020 */  lw    $t8, 0x20($t7)
/* 0045D114 00003025 */  move  $a2, $zero
/* 0045D118 8F040028 */  lw    $a0, 0x28($t8)
/* 0045D11C 0320F809 */  jalr  $t9
/* 0045D120 A3A80026 */   sb    $t0, 0x26($sp)
/* 0045D124 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045D128 10400027 */  beqz  $v0, .L0045D1C8
/* 0045D12C 93A80026 */   lbu   $t0, 0x26($sp)
/* 0045D130 24080001 */  li    $t0, 1
/* 0045D134 1000002F */  b     .L0045D1F4
/* 0045D138 310300FF */   andi  $v1, $t0, 0xff
.L0045D13C:
/* 0045D13C 11200009 */  beqz  $t1, .L0045D164
/* 0045D140 02002025 */   move  $a0, $s0
/* 0045D144 8F8B8044 */  lw    $t3, %got(D_10010D80)($gp)
/* 0045D148 00025143 */  sra   $t2, $v0, 5
/* 0045D14C 000AC880 */  sll   $t9, $t2, 2
/* 0045D150 256B0D80 */  addiu $t3, %lo(D_10010D80) # addiu $t3, $t3, 0xd80
/* 0045D154 01796021 */  addu  $t4, $t3, $t9
/* 0045D158 8D8E0000 */  lw    $t6, ($t4)
/* 0045D15C 004E6804 */  sllv  $t5, $t6, $v0
/* 0045D160 29A90000 */  slti  $t1, $t5, 0
.L0045D164:
/* 0045D164 11200018 */  beqz  $t1, .L0045D1C8
/* 0045D168 00000000 */   nop   
/* 0045D16C 8F9984AC */  lw    $t9, %call16(cupaltered)($gp)
/* 0045D170 90650019 */  lbu   $a1, 0x19($v1)
/* 0045D174 8C660014 */  lw    $a2, 0x14($v1)
/* 0045D178 0320F809 */  jalr  $t9
/* 0045D17C A3A80026 */   sb    $t0, 0x26($sp)
/* 0045D180 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045D184 10400004 */  beqz  $v0, .L0045D198
/* 0045D188 93A80026 */   lbu   $t0, 0x26($sp)
/* 0045D18C 24080001 */  li    $t0, 1
/* 0045D190 10000018 */  b     .L0045D1F4
/* 0045D194 310300FF */   andi  $v1, $t0, 0xff
.L0045D198:
/* 0045D198 8FB8002C */  lw    $t8, 0x2c($sp)
/* 0045D19C 8F9983B8 */  lw    $t9, %call16(listplkilled)($gp)
/* 0045D1A0 8E050008 */  lw    $a1, 8($s0)
/* 0045D1A4 8F0A0020 */  lw    $t2, 0x20($t8)
/* 0045D1A8 00003025 */  move  $a2, $zero
/* 0045D1AC 8D440024 */  lw    $a0, 0x24($t2)
/* 0045D1B0 0320F809 */  jalr  $t9
/* 0045D1B4 A3A80026 */   sb    $t0, 0x26($sp)
/* 0045D1B8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045D1BC 10400002 */  beqz  $v0, .L0045D1C8
/* 0045D1C0 93A80026 */   lbu   $t0, 0x26($sp)
/* 0045D1C4 24080001 */  li    $t0, 1
.L0045D1C8:
/* 0045D1C8 1000000A */  b     .L0045D1F4
/* 0045D1CC 310300FF */   andi  $v1, $t0, 0xff
.L0045D1D0:
/* 0045D1D0 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0045D1D4 8F868044 */  lw    $a2, %got(RO_1000D52C)($gp)
/* 0045D1D8 24040001 */  li    $a0, 1
/* 0045D1DC 24050084 */  li    $a1, 132
/* 0045D1E0 2407000A */  li    $a3, 10
/* 0045D1E4 0320F809 */  jalr  $t9
/* 0045D1E8 24C6D52C */   addiu $a2, %lo(RO_1000D52C) # addiu $a2, $a2, -0x2ad4
/* 0045D1EC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045D1F0 93A30027 */  lbu   $v1, 0x27($sp)
.L0045D1F4:
/* 0045D1F4 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0045D1F8 8FB00014 */  lw    $s0, 0x14($sp)
/* 0045D1FC 27BD0028 */  addiu $sp, $sp, 0x28
/* 0045D200 03E00008 */  jr    $ra
/* 0045D204 00601025 */   move  $v0, $v1
    .type expaltered, @function
    .size expaltered, .-expaltered
    .end expaltered

glabel patchvectors
    .ent patchvectors
    # 00456A2C oneproc
/* 0045D208 3C1C0FBC */  .cpload $t9
/* 0045D20C 279CD088 */  
/* 0045D210 0399E021 */  
/* 0045D214 27BDFF90 */  addiu $sp, $sp, -0x70
/* 0045D218 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 0045D21C AFBF003C */  sw    $ra, 0x3c($sp)
/* 0045D220 AFBE0038 */  sw    $fp, 0x38($sp)
/* 0045D224 AFBC0034 */  sw    $gp, 0x34($sp)
/* 0045D228 AFB70030 */  sw    $s7, 0x30($sp)
/* 0045D22C AFB6002C */  sw    $s6, 0x2c($sp)
/* 0045D230 AFB50028 */  sw    $s5, 0x28($sp)
/* 0045D234 AFB40024 */  sw    $s4, 0x24($sp)
/* 0045D238 AFB30020 */  sw    $s3, 0x20($sp)
/* 0045D23C AFB2001C */  sw    $s2, 0x1c($sp)
/* 0045D240 AFB10018 */  sw    $s1, 0x18($sp)
/* 0045D244 AFB00014 */  sw    $s0, 0x14($sp)
/* 0045D248 0320F809 */  jalr  $t9
/* 0045D24C 8F848CEC */   lw     $a0, %got(storeop)($gp)
/* 0045D250 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0045D254 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 0045D258 8F848CF0 */  lw     $a0, %got(trapop)($gp)
/* 0045D25C 0320F809 */  jalr  $t9
/* 0045D260 00000000 */   nop   
/* 0045D264 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0045D268 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 0045D26C 8F848CD4 */  lw     $a0, %got(varbits)($gp)
/* 0045D270 0320F809 */  jalr  $t9
/* 0045D274 00000000 */   nop   
/* 0045D278 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0045D27C 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 0045D280 8F848CE0 */  lw     $a0, %got(asgnbits)($gp)
/* 0045D284 0320F809 */  jalr  $t9
/* 0045D288 00000000 */   nop   
/* 0045D28C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0045D290 240F0001 */  li    $t7, 1
/* 0045D294 8F8E8B20 */  lw     $t6, %got(outofmem)($gp)
/* 0045D298 91CE0000 */  lbu   $t6, ($t6)
/* 0045D29C 55C001B3 */  bnezl $t6, .L0045D96C
/* 0045D2A0 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0045D2A4 8F818B38 */  lw     $at, %got(leaf_for_ugen)($gp)
/* 0045D2A8 8F9389AC */  lw     $s3, %got(graphhead)($gp)
/* 0045D2AC 8F9E897C */  lw     $fp, %got(curlevel)($gp)
/* 0045D2B0 A02F0000 */  sb    $t7, ($at)
/* 0045D2B4 8E730000 */  lw    $s3, ($s3)
.L0045D2B8:
/* 0045D2B8 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 0045D2BC 26640104 */  addiu $a0, $s3, 0x104
/* 0045D2C0 0320F809 */  jalr  $t9
/* 0045D2C4 00000000 */   nop   
/* 0045D2C8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0045D2CC 26640114 */  addiu $a0, $s3, 0x114
/* 0045D2D0 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 0045D2D4 0320F809 */  jalr  $t9
/* 0045D2D8 00000000 */   nop   
/* 0045D2DC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0045D2E0 2675010C */  addiu $s5, $s3, 0x10c
/* 0045D2E4 02A02025 */  move  $a0, $s5
/* 0045D2E8 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 0045D2EC 0320F809 */  jalr  $t9
/* 0045D2F0 00000000 */   nop   
/* 0045D2F4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0045D2F8 26640124 */  addiu $a0, $s3, 0x124
/* 0045D2FC 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 0045D300 0320F809 */  jalr  $t9
/* 0045D304 00000000 */   nop   
/* 0045D308 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0045D30C 2664011C */  addiu $a0, $s3, 0x11c
/* 0045D310 AFA40044 */  sw    $a0, 0x44($sp)
/* 0045D314 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 0045D318 0320F809 */  jalr  $t9
/* 0045D31C 00000000 */   nop   
/* 0045D320 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0045D324 2677012C */  addiu $s7, $s3, 0x12c
/* 0045D328 02E02025 */  move  $a0, $s7
/* 0045D32C 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 0045D330 0320F809 */  jalr  $t9
/* 0045D334 00000000 */   nop   
/* 0045D338 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0045D33C 24010010 */  li    $at, 16
/* 0045D340 8F848B20 */  lw     $a0, %got(outofmem)($gp)
/* 0045D344 90840000 */  lbu   $a0, ($a0)
/* 0045D348 54800188 */  bnezl $a0, .L0045D96C
/* 0045D34C 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0045D350 8E620020 */  lw    $v0, 0x20($s3)
/* 0045D354 90430000 */  lbu   $v1, ($v0)
/* 0045D358 2C7800A0 */  sltiu $t8, $v1, 0xa0
/* 0045D35C 13000009 */  beqz  $t8, .L0045D384
/* 0045D360 00000000 */   nop   
/* 0045D364 8F898044 */  lw    $t1, %got(D_10010DB4)($gp)
/* 0045D368 0003C943 */  sra   $t9, $v1, 5
/* 0045D36C 00194080 */  sll   $t0, $t9, 2
/* 0045D370 25290DB4 */  addiu $t1, %lo(D_10010DB4) # addiu $t1, $t1, 0xdb4
/* 0045D374 01285021 */  addu  $t2, $t1, $t0
/* 0045D378 8D4B0000 */  lw    $t3, ($t2)
/* 0045D37C 006B6004 */  sllv  $t4, $t3, $v1
/* 0045D380 29980000 */  slti  $t8, $t4, 0
.L0045D384:
/* 0045D384 13000008 */  beqz  $t8, .L0045D3A8
/* 0045D388 2C6A00A0 */   sltiu $t2, $v1, 0xa0
/* 0045D38C 944E001A */  lhu   $t6, 0x1a($v0)
/* 0045D390 31CF0002 */  andi  $t7, $t6, 2
/* 0045D394 15E00004 */  bnez  $t7, .L0045D3A8
/* 0045D398 00000000 */   nop   
/* 0045D39C 8F818B38 */  lw     $at, %got(leaf_for_ugen)($gp)
/* 0045D3A0 10000009 */  b     .L0045D3C8
/* 0045D3A4 A0200000 */   sb    $zero, ($at)
.L0045D3A8:
/* 0045D3A8 54610008 */  bnel  $v1, $at, .L0045D3CC
/* 0045D3AC 8E680024 */   lw    $t0, 0x24($s3)
/* 0045D3B0 90590018 */  lbu   $t9, 0x18($v0)
/* 0045D3B4 33290001 */  andi  $t1, $t9, 1
/* 0045D3B8 51200004 */  beql  $t1, $zero, .L0045D3CC
/* 0045D3BC 8E680024 */   lw    $t0, 0x24($s3)
/* 0045D3C0 8F818B38 */  lw     $at, %got(leaf_for_ugen)($gp)
/* 0045D3C4 A0200000 */  sb    $zero, ($at)
.L0045D3C8:
/* 0045D3C8 8E680024 */  lw    $t0, 0x24($s3)
.L0045D3CC:
/* 0045D3CC 1500000E */  bnez  $t0, .L0045D408
/* 0045D3D0 00000000 */   nop   
/* 0045D3D4 1140000A */  beqz  $t2, .L0045D400
/* 0045D3D8 00000000 */   nop   
/* 0045D3DC 8F8D8044 */  lw    $t5, %got(D_10010DA0)($gp)
/* 0045D3E0 00035943 */  sra   $t3, $v1, 5
/* 0045D3E4 000B6080 */  sll   $t4, $t3, 2
/* 0045D3E8 25AD0DA0 */  addiu $t5, %lo(D_10010DA0) # addiu $t5, $t5, 0xda0
/* 0045D3EC 01ACC021 */  addu  $t8, $t5, $t4
/* 0045D3F0 8F0E0000 */  lw    $t6, ($t8)
/* 0045D3F4 006E7804 */  sllv  $t7, $t6, $v1
/* 0045D3F8 29F90000 */  slti  $t9, $t7, 0
/* 0045D3FC 03205025 */  move  $t2, $t9
.L0045D400:
/* 0045D400 11400154 */  beqz  $t2, .L0045D954
/* 0045D404 00000000 */   nop   
.L0045D408:
/* 0045D408 8F8289E0 */  lw     $v0, %got(bitposcount)($gp)
/* 0045D40C 0000A025 */  move  $s4, $zero
/* 0045D410 0000B025 */  move  $s6, $zero
/* 0045D414 8C420000 */  lw    $v0, ($v0)
/* 0045D418 2442FFFF */  addiu $v0, $v0, -1
/* 0045D41C 0440014D */  bltz  $v0, .L0045D954
/* 0045D420 24420001 */   addiu $v0, $v0, 1
/* 0045D424 AFA20058 */  sw    $v0, 0x58($sp)
.L0045D428:
/* 0045D428 8F8989EC */  lw     $t1, %got(bittab)($gp)
/* 0045D42C 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0045D430 02802025 */  move  $a0, $s4
/* 0045D434 8D290000 */  lw    $t1, ($t1)
/* 0045D438 8F858CE0 */  lw     $a1, %got(asgnbits)($gp)
/* 0045D43C 01364021 */  addu  $t0, $t1, $s6
/* 0045D440 0320F809 */  jalr  $t9
/* 0045D444 8D100000 */   lw    $s0, ($t0)
/* 0045D448 1040002C */  beqz  $v0, .L0045D4FC
/* 0045D44C 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0045D450 920B0019 */  lbu   $t3, 0x19($s0)
/* 0045D454 55600139 */  bnezl $t3, .L0045D93C
/* 0045D458 8FAF0058 */   lw    $t7, 0x58($sp)
/* 0045D45C 920D001A */  lbu   $t5, 0x1a($s0)
/* 0045D460 11A00008 */  beqz  $t5, .L0045D484
/* 0045D464 00000000 */   nop   
/* 0045D468 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0045D46C 02A02025 */  move  $a0, $s5
/* 0045D470 02802825 */  move  $a1, $s4
/* 0045D474 0320F809 */  jalr  $t9
/* 0045D478 00000000 */   nop   
/* 0045D47C 1000012E */  b     .L0045D938
/* 0045D480 8FBC0034 */   lw    $gp, 0x34($sp)
.L0045D484:
/* 0045D484 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0045D488 02802025 */  move  $a0, $s4
/* 0045D48C 02A02825 */  move  $a1, $s5
/* 0045D490 0320F809 */  jalr  $t9
/* 0045D494 00000000 */   nop   
/* 0045D498 14400127 */  bnez  $v0, .L0045D938
/* 0045D49C 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0045D4A0 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0045D4A4 02802025 */  move  $a0, $s4
/* 0045D4A8 02E02825 */  move  $a1, $s7
/* 0045D4AC 0320F809 */  jalr  $t9
/* 0045D4B0 00000000 */   nop   
/* 0045D4B4 14400120 */  bnez  $v0, .L0045D938
/* 0045D4B8 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0045D4BC 8F848B78 */  lw     $a0, %got(gsptr)($gp)
/* 0045D4C0 8E0C0008 */  lw    $t4, 8($s0)
/* 0045D4C4 8F9983C8 */  lw    $t9, %call16(strlkilled)($gp)
/* 0045D4C8 8C840000 */  lw    $a0, ($a0)
/* 0045D4CC AC8C0004 */  sw    $t4, 4($a0)
/* 0045D4D0 0320F809 */  jalr  $t9
/* 0045D4D4 8E650024 */   lw    $a1, 0x24($s3)
/* 0045D4D8 10400117 */  beqz  $v0, .L0045D938
/* 0045D4DC 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0045D4E0 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0045D4E4 02A02025 */  move  $a0, $s5
/* 0045D4E8 02802825 */  move  $a1, $s4
/* 0045D4EC 0320F809 */  jalr  $t9
/* 0045D4F0 00000000 */   nop   
/* 0045D4F4 10000110 */  b     .L0045D938
/* 0045D4F8 8FBC0034 */   lw    $gp, 0x34($sp)
.L0045D4FC:
/* 0045D4FC 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0045D500 02802025 */  move  $a0, $s4
/* 0045D504 02E02825 */  move  $a1, $s7
/* 0045D508 0320F809 */  jalr  $t9
/* 0045D50C 00000000 */   nop   
/* 0045D510 14400109 */  bnez  $v0, .L0045D938
/* 0045D514 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0045D518 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0045D51C 02802025 */  move  $a0, $s4
/* 0045D520 8F858CEC */  lw     $a1, %got(storeop)($gp)
/* 0045D524 0320F809 */  jalr  $t9
/* 0045D528 00000000 */   nop   
/* 0045D52C 14400028 */  bnez  $v0, .L0045D5D0
/* 0045D530 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0045D534 92180000 */  lbu   $t8, ($s0)
/* 0045D538 3C011200 */  lui   $at, 0x1200
/* 0045D53C 2F0E0020 */  sltiu $t6, $t8, 0x20
/* 0045D540 000E7823 */  negu  $t7, $t6
/* 0045D544 01E1C824 */  and   $t9, $t7, $at
/* 0045D548 03195004 */  sllv  $t2, $t9, $t8
/* 0045D54C 0541000B */  bgez  $t2, .L0045D57C
/* 0045D550 00000000 */   nop   
/* 0045D554 9209001A */  lbu   $t1, 0x1a($s0)
/* 0045D558 11200008 */  beqz  $t1, .L0045D57C
/* 0045D55C 00000000 */   nop   
/* 0045D560 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0045D564 02A02025 */  move  $a0, $s5
/* 0045D568 02802825 */  move  $a1, $s4
/* 0045D56C 0320F809 */  jalr  $t9
/* 0045D570 00000000 */   nop   
/* 0045D574 100000F0 */  b     .L0045D938
/* 0045D578 8FBC0034 */   lw    $gp, 0x34($sp)
.L0045D57C:
/* 0045D57C 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0045D580 02802025 */  move  $a0, $s4
/* 0045D584 02A02825 */  move  $a1, $s5
/* 0045D588 0320F809 */  jalr  $t9
/* 0045D58C 00000000 */   nop   
/* 0045D590 144000E9 */  bnez  $v0, .L0045D938
/* 0045D594 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0045D598 8F9984B0 */  lw    $t9, %call16(expaltered)($gp)
/* 0045D59C 02002025 */  move  $a0, $s0
/* 0045D5A0 02602825 */  move  $a1, $s3
/* 0045D5A4 0320F809 */  jalr  $t9
/* 0045D5A8 00000000 */   nop   
/* 0045D5AC 104000E2 */  beqz  $v0, .L0045D938
/* 0045D5B0 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0045D5B4 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0045D5B8 02A02025 */  move  $a0, $s5
/* 0045D5BC 02802825 */  move  $a1, $s4
/* 0045D5C0 0320F809 */  jalr  $t9
/* 0045D5C4 00000000 */   nop   
/* 0045D5C8 100000DB */  b     .L0045D938
/* 0045D5CC 8FBC0034 */   lw    $gp, 0x34($sp)
.L0045D5D0:
/* 0045D5D0 8F9984A8 */  lw    $t9, %call16(expinalter)($gp)
/* 0045D5D4 8E040018 */  lw    $a0, 0x18($s0)
/* 0045D5D8 02602825 */  move  $a1, $s3
/* 0045D5DC 0320F809 */  jalr  $t9
/* 0045D5E0 00000000 */   nop   
/* 0045D5E4 10400004 */  beqz  $v0, .L0045D5F8
/* 0045D5E8 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0045D5EC 24120001 */  li    $s2, 1
/* 0045D5F0 1000003F */  b     .L0045D6F0
/* 0045D5F4 24110001 */   li    $s1, 1
.L0045D5F8:
/* 0045D5F8 92080010 */  lbu   $t0, 0x10($s0)
/* 0045D5FC 250BFFE0 */  addiu $t3, $t0, -0x20
/* 0045D600 2D6D0060 */  sltiu $t5, $t3, 0x60
/* 0045D604 11A00009 */  beqz  $t5, .L0045D62C
/* 0045D608 00000000 */   nop   
/* 0045D60C 8F8F8044 */  lw    $t7, %got(D_10010D94)($gp)
/* 0045D610 000B6143 */  sra   $t4, $t3, 5
/* 0045D614 000C7080 */  sll   $t6, $t4, 2
/* 0045D618 25EF0D94 */  addiu $t7, %lo(D_10010D94) # addiu $t7, $t7, 0xd94
/* 0045D61C 01EEC821 */  addu  $t9, $t7, $t6
/* 0045D620 8F380000 */  lw    $t8, ($t9)
/* 0045D624 01785004 */  sllv  $t2, $t8, $t3
/* 0045D628 294D0000 */  slti  $t5, $t2, 0
.L0045D62C:
/* 0045D62C 11A00018 */  beqz  $t5, .L0045D690
/* 0045D630 00000000 */   nop   
/* 0045D634 8E020014 */  lw    $v0, 0x14($s0)
/* 0045D638 24120001 */  li    $s2, 1
/* 0045D63C 9048001A */  lbu   $t0, 0x1a($v0)
/* 0045D640 11000003 */  beqz  $t0, .L0045D650
/* 0045D644 00000000 */   nop   
/* 0045D648 10000029 */  b     .L0045D6F0
/* 0045D64C 24110001 */   li    $s1, 1
.L0045D650:
/* 0045D650 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0045D654 94440024 */  lhu   $a0, 0x24($v0)
/* 0045D658 02A02825 */  move  $a1, $s5
/* 0045D65C 0320F809 */  jalr  $t9
/* 0045D660 00000000 */   nop   
/* 0045D664 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0045D668 8E0C0014 */  lw    $t4, 0x14($s0)
/* 0045D66C 305200FF */  andi  $s2, $v0, 0xff
/* 0045D670 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0045D674 02A02825 */  move  $a1, $s5
/* 0045D678 95840002 */  lhu   $a0, 2($t4)
/* 0045D67C 0320F809 */  jalr  $t9
/* 0045D680 00000000 */   nop   
/* 0045D684 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0045D688 10000019 */  b     .L0045D6F0
/* 0045D68C 305100FF */   andi  $s1, $v0, 0xff
.L0045D690:
/* 0045D690 8F9984A8 */  lw    $t9, %call16(expinalter)($gp)
/* 0045D694 8E040014 */  lw    $a0, 0x14($s0)
/* 0045D698 02602825 */  move  $a1, $s3
/* 0045D69C 0320F809 */  jalr  $t9
/* 0045D6A0 00000000 */   nop   
/* 0045D6A4 10400004 */  beqz  $v0, .L0045D6B8
/* 0045D6A8 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0045D6AC 24120001 */  li    $s2, 1
/* 0045D6B0 1000000F */  b     .L0045D6F0
/* 0045D6B4 24110001 */   li    $s1, 1
.L0045D6B8:
/* 0045D6B8 8F9983C8 */  lw    $t9, %call16(strlkilled)($gp)
/* 0045D6BC 8E040020 */  lw    $a0, 0x20($s0)
/* 0045D6C0 8E650024 */  lw    $a1, 0x24($s3)
/* 0045D6C4 0320F809 */  jalr  $t9
/* 0045D6C8 00000000 */   nop   
/* 0045D6CC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0045D6D0 305200FF */  andi  $s2, $v0, 0xff
/* 0045D6D4 8E040020 */  lw    $a0, 0x20($s0)
/* 0045D6D8 8F9983CC */  lw    $t9, %call16(strskilled)($gp)
/* 0045D6DC 8E650024 */  lw    $a1, 0x24($s3)
/* 0045D6E0 0320F809 */  jalr  $t9
/* 0045D6E4 00000000 */   nop   
/* 0045D6E8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0045D6EC 305100FF */  andi  $s1, $v0, 0xff
.L0045D6F0:
/* 0045D6F0 8E620020 */  lw    $v0, 0x20($s3)
/* 0045D6F4 90430000 */  lbu   $v1, ($v0)
/* 0045D6F8 2C6F00A0 */  sltiu $t7, $v1, 0xa0
/* 0045D6FC 11E00009 */  beqz  $t7, .L0045D724
/* 0045D700 00000000 */   nop   
/* 0045D704 8F988044 */  lw    $t8, %got(D_10010DA0)($gp)
/* 0045D708 00037143 */  sra   $t6, $v1, 5
/* 0045D70C 000EC880 */  sll   $t9, $t6, 2
/* 0045D710 27180DA0 */  addiu $t8, %lo(D_10010DA0) # addiu $t8, $t8, 0xda0
/* 0045D714 03195821 */  addu  $t3, $t8, $t9
/* 0045D718 8D6A0000 */  lw    $t2, ($t3)
/* 0045D71C 006A4804 */  sllv  $t1, $t2, $v1
/* 0045D720 292F0000 */  slti  $t7, $t1, 0
.L0045D724:
/* 0045D724 11E00072 */  beqz  $t7, .L0045D8F0
/* 0045D728 00000000 */   nop   
/* 0045D72C 16200070 */  bnez  $s1, .L0045D8F0
/* 0045D730 00000000 */   nop   
/* 0045D734 92080010 */  lbu   $t0, 0x10($s0)
/* 0045D738 24010010 */  li    $at, 16
/* 0045D73C 250CFFE0 */  addiu $t4, $t0, -0x20
/* 0045D740 2D8E0060 */  sltiu $t6, $t4, 0x60
/* 0045D744 11C00009 */  beqz  $t6, .L0045D76C
/* 0045D748 00000000 */   nop   
/* 0045D74C 8F8B8044 */  lw    $t3, %got(D_10010D94)($gp)
/* 0045D750 000CC143 */  sra   $t8, $t4, 5
/* 0045D754 0018C880 */  sll   $t9, $t8, 2
/* 0045D758 256B0D94 */  addiu $t3, %lo(D_10010D94) # addiu $t3, $t3, 0xd94
/* 0045D75C 01795021 */  addu  $t2, $t3, $t9
/* 0045D760 8D490000 */  lw    $t1, ($t2)
/* 0045D764 01896804 */  sllv  $t5, $t1, $t4
/* 0045D768 29AE0000 */  slti  $t6, $t5, 0
.L0045D76C:
/* 0045D76C 15C00060 */  bnez  $t6, .L0045D8F0
/* 0045D770 00000000 */   nop   
/* 0045D774 14610037 */  bne   $v1, $at, .L0045D854
/* 0045D778 00000000 */   nop   
/* 0045D77C 8F888A5C */  lw     $t0, %got(lang)($gp)
/* 0045D780 24010003 */  li    $at, 3
/* 0045D784 91080000 */  lbu   $t0, ($t0)
/* 0045D788 55010005 */  bnel  $t0, $at, .L0045D7A0
/* 0045D78C 90580018 */   lbu   $t8, 0x18($v0)
/* 0045D790 24110001 */  li    $s1, 1
/* 0045D794 10000056 */  b     .L0045D8F0
/* 0045D798 24120001 */   li    $s2, 1
/* 0045D79C 90580018 */  lbu   $t8, 0x18($v0)
.L0045D7A0:
/* 0045D7A0 330B0001 */  andi  $t3, $t8, 1
/* 0045D7A4 5160000D */  beql  $t3, $zero, .L0045D7DC
/* 0045D7A8 8E790020 */   lw    $t9, 0x20($s3)
/* 0045D7AC 8F9983AC */  lw    $t9, %call16(cskilled)($gp)
/* 0045D7B0 8F858B70 */  lw     $a1, %got(indirprocs)($gp)
/* 0045D7B4 8FC40000 */  lw    $a0, ($fp)
/* 0045D7B8 8E060020 */  lw    $a2, 0x20($s0)
/* 0045D7BC 0320F809 */  jalr  $t9
/* 0045D7C0 8CA50000 */   lw    $a1, ($a1)
/* 0045D7C4 10400004 */  beqz  $v0, .L0045D7D8
/* 0045D7C8 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0045D7CC 24110001 */  li    $s1, 1
/* 0045D7D0 10000047 */  b     .L0045D8F0
/* 0045D7D4 24120001 */   li    $s2, 1
.L0045D7D8:
/* 0045D7D8 8E790020 */  lw    $t9, 0x20($s3)
.L0045D7DC:
/* 0045D7DC 8E050020 */  lw    $a1, 0x20($s0)
/* 0045D7E0 00003025 */  move  $a2, $zero
/* 0045D7E4 8F240028 */  lw    $a0, 0x28($t9)
/* 0045D7E8 8F9983BC */  lw    $t9, %call16(listpskilled)($gp)
/* 0045D7EC 0320F809 */  jalr  $t9
/* 0045D7F0 00000000 */   nop   
/* 0045D7F4 10400004 */  beqz  $v0, .L0045D808
/* 0045D7F8 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0045D7FC 24110001 */  li    $s1, 1
/* 0045D800 1000003B */  b     .L0045D8F0
/* 0045D804 24120001 */   li    $s2, 1
.L0045D808:
/* 0045D808 920A0010 */  lbu   $t2, 0x10($s0)
/* 0045D80C 2549FFC0 */  addiu $t1, $t2, -0x40
/* 0045D810 2D2C0020 */  sltiu $t4, $t1, 0x20
/* 0045D814 000C6823 */  negu  $t5, $t4
/* 0045D818 31AF00C0 */  andi  $t7, $t5, 0xc0
/* 0045D81C 012F7004 */  sllv  $t6, $t7, $t1
/* 0045D820 05C10033 */  bgez  $t6, .L0045D8F0
/* 0045D824 00000000 */   nop   
/* 0045D828 8F9983A8 */  lw    $t9, %call16(cmkilled)($gp)
/* 0045D82C 8F858B70 */  lw     $a1, %got(indirprocs)($gp)
/* 0045D830 8FC40000 */  lw    $a0, ($fp)
/* 0045D834 8E060020 */  lw    $a2, 0x20($s0)
/* 0045D838 0320F809 */  jalr  $t9
/* 0045D83C 8CA50000 */   lw    $a1, ($a1)
/* 0045D840 1040002B */  beqz  $v0, .L0045D8F0
/* 0045D844 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0045D848 24110001 */  li    $s1, 1
/* 0045D84C 10000028 */  b     .L0045D8F0
/* 0045D850 24120001 */   li    $s2, 1
.L0045D854:
/* 0045D854 8F9983AC */  lw    $t9, %call16(cskilled)($gp)
/* 0045D858 90440019 */  lbu   $a0, 0x19($v0)
/* 0045D85C 8C450014 */  lw    $a1, 0x14($v0)
/* 0045D860 0320F809 */  jalr  $t9
/* 0045D864 8E060020 */   lw    $a2, 0x20($s0)
/* 0045D868 10400004 */  beqz  $v0, .L0045D87C
/* 0045D86C 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0045D870 24110001 */  li    $s1, 1
/* 0045D874 1000001E */  b     .L0045D8F0
/* 0045D878 24120001 */   li    $s2, 1
.L0045D87C:
/* 0045D87C 8F9983BC */  lw    $t9, %call16(listpskilled)($gp)
/* 0045D880 8E680020 */  lw    $t0, 0x20($s3)
/* 0045D884 8E050020 */  lw    $a1, 0x20($s0)
/* 0045D888 00003025 */  move  $a2, $zero
/* 0045D88C 0320F809 */  jalr  $t9
/* 0045D890 8D040024 */   lw    $a0, 0x24($t0)
/* 0045D894 10400004 */  beqz  $v0, .L0045D8A8
/* 0045D898 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0045D89C 24110001 */  li    $s1, 1
/* 0045D8A0 10000013 */  b     .L0045D8F0
/* 0045D8A4 24120001 */   li    $s2, 1
.L0045D8A8:
/* 0045D8A8 92180010 */  lbu   $t8, 0x10($s0)
/* 0045D8AC 270BFFC0 */  addiu $t3, $t8, -0x40
/* 0045D8B0 2D790020 */  sltiu $t9, $t3, 0x20
/* 0045D8B4 00195023 */  negu  $t2, $t9
/* 0045D8B8 314C00C0 */  andi  $t4, $t2, 0xc0
/* 0045D8BC 016C6804 */  sllv  $t5, $t4, $t3
/* 0045D8C0 05A1000B */  bgez  $t5, .L0045D8F0
/* 0045D8C4 00000000 */   nop   
/* 0045D8C8 8E620020 */  lw    $v0, 0x20($s3)
/* 0045D8CC 8F9983A8 */  lw    $t9, %call16(cmkilled)($gp)
/* 0045D8D0 8E060020 */  lw    $a2, 0x20($s0)
/* 0045D8D4 90440019 */  lbu   $a0, 0x19($v0)
/* 0045D8D8 0320F809 */  jalr  $t9
/* 0045D8DC 8C450014 */   lw    $a1, 0x14($v0)
/* 0045D8E0 10400003 */  beqz  $v0, .L0045D8F0
/* 0045D8E4 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0045D8E8 24110001 */  li    $s1, 1
/* 0045D8EC 24120001 */  li    $s2, 1
.L0045D8F0:
/* 0045D8F0 12200007 */  beqz  $s1, .L0045D910
/* 0045D8F4 00000000 */   nop   
/* 0045D8F8 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0045D8FC 8FA40044 */  lw    $a0, 0x44($sp)
/* 0045D900 02802825 */  move  $a1, $s4
/* 0045D904 0320F809 */  jalr  $t9
/* 0045D908 00000000 */   nop   
/* 0045D90C 8FBC0034 */  lw    $gp, 0x34($sp)
.L0045D910:
/* 0045D910 16200003 */  bnez  $s1, .L0045D920
/* 0045D914 00000000 */   nop   
/* 0045D918 52400008 */  beql  $s2, $zero, .L0045D93C
/* 0045D91C 8FAF0058 */   lw    $t7, 0x58($sp)
.L0045D920:
/* 0045D920 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0045D924 02A02025 */  move  $a0, $s5
/* 0045D928 02802825 */  move  $a1, $s4
/* 0045D92C 0320F809 */  jalr  $t9
/* 0045D930 00000000 */   nop   
/* 0045D934 8FBC0034 */  lw    $gp, 0x34($sp)
.L0045D938:
/* 0045D938 8FAF0058 */  lw    $t7, 0x58($sp)
.L0045D93C:
/* 0045D93C 26940001 */  addiu $s4, $s4, 1
/* 0045D940 26D60008 */  addiu $s6, $s6, 8
/* 0045D944 168FFEB8 */  bne   $s4, $t7, .L0045D428
/* 0045D948 00000000 */   nop   
/* 0045D94C 8F848B20 */  lw     $a0, %got(outofmem)($gp)
/* 0045D950 90840000 */  lbu   $a0, ($a0)
.L0045D954:
/* 0045D954 54800005 */  bnezl $a0, .L0045D96C
/* 0045D958 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0045D95C 8E73000C */  lw    $s3, 0xc($s3)
/* 0045D960 1660FE55 */  bnez  $s3, .L0045D2B8
/* 0045D964 00000000 */   nop   
/* 0045D968 8FBF003C */  lw    $ra, 0x3c($sp)
.L0045D96C:
/* 0045D96C 8FB00014 */  lw    $s0, 0x14($sp)
/* 0045D970 8FB10018 */  lw    $s1, 0x18($sp)
/* 0045D974 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0045D978 8FB30020 */  lw    $s3, 0x20($sp)
/* 0045D97C 8FB40024 */  lw    $s4, 0x24($sp)
/* 0045D980 8FB50028 */  lw    $s5, 0x28($sp)
/* 0045D984 8FB6002C */  lw    $s6, 0x2c($sp)
/* 0045D988 8FB70030 */  lw    $s7, 0x30($sp)
/* 0045D98C 8FBE0038 */  lw    $fp, 0x38($sp)
/* 0045D990 03E00008 */  jr    $ra
/* 0045D994 27BD0070 */   addiu $sp, $sp, 0x70
    .type patchvectors, @function
    .size patchvectors, .-patchvectors
    .end patchvectors
)"");
