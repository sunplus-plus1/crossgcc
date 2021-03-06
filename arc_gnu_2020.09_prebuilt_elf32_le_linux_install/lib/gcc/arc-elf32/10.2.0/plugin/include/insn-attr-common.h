/* Generated automatically by the program `genattr-common'
   from the machine description file `md'.  */

#ifndef GCC_INSN_ATTR_COMMON_H
#define GCC_INSN_ATTR_COMMON_H

enum attr_nonce_enabled {NONCE_ENABLED_NO, NONCE_ENABLED_YES};
enum attr_ce_enabled {CE_ENABLED_NO, CE_ENABLED_YES};
enum attr_is_sfunc {IS_SFUNC_NO, IS_SFUNC_YES};
enum attr_type {TYPE_MOVE, TYPE_LOAD, TYPE_STORE, TYPE_CMOVE, TYPE_UNARY, TYPE_BINARY, TYPE_COMPARE, TYPE_SHIFT, TYPE_UNCOND_BRANCH, TYPE_JUMP, TYPE_BRANCH, TYPE_BRCC, TYPE_BRCC_NO_DELAY_SLOT, TYPE_CALL, TYPE_SFUNC, TYPE_CALL_NO_DELAY_SLOT, TYPE_RTIE, TYPE_MULTI, TYPE_UMULTI, TYPE_TWO_CYCLE_CORE, TYPE_LR, TYPE_SR, TYPE_DIVAW, TYPE_LOOP_SETUP, TYPE_LOOP_END, TYPE_RETURN, TYPE_MISC, TYPE_SPFP, TYPE_DPFP_MULT, TYPE_DPFP_ADDSUB, TYPE_MULMAC_600, TYPE_CC_ARITH, TYPE_SIMD_VLOAD, TYPE_SIMD_VLOAD128, TYPE_SIMD_VSTORE, TYPE_SIMD_VMOVE, TYPE_SIMD_VMOVE_ELSE_ZERO, TYPE_SIMD_VMOVE_WITH_ACC, TYPE_SIMD_VARITH_1CYCLE, TYPE_SIMD_VARITH_2CYCLE, TYPE_SIMD_VARITH_WITH_ACC, TYPE_SIMD_VLOGIC, TYPE_SIMD_VLOGIC_WITH_ACC, TYPE_SIMD_VCOMPARE, TYPE_SIMD_VPERMUTE, TYPE_SIMD_VPACK, TYPE_SIMD_VPACK_WITH_ACC, TYPE_SIMD_VALIGN, TYPE_SIMD_VALIGN_WITH_ACC, TYPE_SIMD_VCONTROL, TYPE_SIMD_VSPECIAL_3CYCLE, TYPE_SIMD_VSPECIAL_4CYCLE, TYPE_SIMD_DMA, TYPE_MUL16_EM, TYPE_DIV_REM, TYPE_FPU, TYPE_FPU_FUSE, TYPE_FPU_SDIV, TYPE_FPU_DDIV, TYPE_FPU_CVT, TYPE_BLOCK};
enum attr_is_CALL {IS_CALL_NO, IS_CALL_YES};
enum attr_is_SIBCALL {IS_SIBCALL_NO, IS_SIBCALL_YES};
enum attr_is_NON_SIBCALL {IS_NON_SIBCALL_NO, IS_NON_SIBCALL_YES};
enum attr_iscompact {ISCOMPACT_TRUE, ISCOMPACT_MAYBE, ISCOMPACT_TRUE_LIMM, ISCOMPACT_MAYBE_LIMM, ISCOMPACT_FALSE};
enum attr_delay_slot_filled {DELAY_SLOT_FILLED_NO, DELAY_SLOT_FILLED_YES};
enum attr_delay_slot_present {DELAY_SLOT_PRESENT_NO, DELAY_SLOT_PRESENT_YES};
enum attr_cpu_facility {CPU_FACILITY_STD, CPU_FACILITY_AV1, CPU_FACILITY_AV2, CPU_FACILITY_FPX, CPU_FACILITY_CD};
enum attr_enabled {ENABLED_NO, ENABLED_YES};
enum attr_predicable {PREDICABLE_NO, PREDICABLE_YES};
enum attr_cond {COND_USE, COND_CANUSE, COND_CANUSE_LIMM, COND_CANUSE_LIMM_ADD, COND_SET, COND_SET_ZN, COND_CLOB, COND_NOCOND};
enum attr_in_delay_slot {IN_DELAY_SLOT_FALSE, IN_DELAY_SLOT_TRUE};
enum attr_in_call_delay_slot {IN_CALL_DELAY_SLOT_FALSE, IN_CALL_DELAY_SLOT_TRUE};
enum attr_in_sfunc_delay_slot {IN_SFUNC_DELAY_SLOT_FALSE, IN_SFUNC_DELAY_SLOT_TRUE};
enum attr_cond_delay_insn {COND_DELAY_INSN_NO, COND_DELAY_INSN_YES};
enum attr_in_ret_delay_slot {IN_RET_DELAY_SLOT_NO, IN_RET_DELAY_SLOT_YES};
enum attr_cond_ret_delay_insn {COND_RET_DELAY_INSN_NO, COND_RET_DELAY_INSN_YES};
enum attr_annul_ret_delay_insn {ANNUL_RET_DELAY_INSN_NO, ANNUL_RET_DELAY_INSN_YES};
enum attr_tune {TUNE_NONE, TUNE_ARC600, TUNE_ARC7XX, TUNE_ARC700_4_2_STD, TUNE_ARC700_4_2_XMAC, TUNE_ARCHS4X, TUNE_ARCHS4XD};
enum attr_tune_arc700 {TUNE_ARC700_FALSE, TUNE_ARC700_TRUE};
enum attr_tune_dspmpy {TUNE_DSPMPY_NONE, TUNE_DSPMPY_SLOW, TUNE_DSPMPY_FAST};
enum attr_tune_store {TUNE_STORE_NONE, TUNE_STORE_NORMAL, TUNE_STORE_REL31A};
#define INSN_SCHEDULING
#define DELAY_SLOTS 1

#endif /* GCC_INSN_ATTR_COMMON_H */
