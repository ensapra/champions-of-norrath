#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16; typedef s32 M2C_UNK32;
#define M2C_FIELD(expr,type_ptr,offset) (*(type_ptr)((s8*)(expr)+(offset)))
#define M2C_BITWISE(type,expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
extern s32 D_004869AC;
void func_001732D8(u32 **arg0,s32 arg1,s32 arg2,s32 arg3,s32 arg4,s32 arg5,s32 arg6,s32 arg7,s32 arg_sp0,s32 arg_sp8){
s32 temp_14,temp_2,var_2,var_5;void *temp_4,*temp_7;
temp_14=arg3&0x10;
if(temp_14){var_5=arg7+4;if(D_004869AC!=2){}else goto block_4;}else{var_5=arg7+4;if(D_004869AC==3){block_4:temp_4=(void*)*arg0;M2C_FIELD(temp_4,s64*,0)=(s64)((arg6+4)|(var_5<<16));M2C_FIELD(temp_4,s64*,8)=(s64)(arg2|(arg3<<16));M2C_FIELD(temp_4,s64*,16)=(s64)((arg_sp0+4)|((arg_sp8+4)<<16));M2C_FIELD(temp_4,s64*,24)=(s64)(arg4|(arg5<<16));*arg0=(u32*)((char*)temp_4+32);}}
if(temp_14==0){var_2=arg1>>1;if(D_004869AC!=2)return;goto block_10;}if(D_004869AC==3){var_2=arg1>>1;block_10:temp_7=(void*)*arg0;temp_2=var_2*16;M2C_FIELD(temp_7,s64*,0)=(s64)((arg6+4)|((temp_2+arg7)<<16));M2C_FIELD(temp_7,s64*,8)=(s64)(arg2|(arg3<<16));M2C_FIELD(temp_7,s64*,16)=(s64)((arg_sp0+4)|((temp_2+arg_sp8)<<16));M2C_FIELD(temp_7,s64*,24)=(s64)(arg4|(arg5<<16));*arg0=(u32*)((char*)temp_7+32);}}
