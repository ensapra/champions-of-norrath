typedef s32 M2C_UNK;
#define M2C_FIELD(expr,type_ptr,offset) (*(type_ptr)((s8*)(expr)+(offset)))
s32 func_0014BA30(void*,void*); extern char func_001C8098[8192];
s32 func_00166FD8(void*arg0,void*arg1,void*arg2){
 s32 temp_4,temp_3_2,temp_3_3,temp_3_4,temp_3_5,temp_3,var_17;
 var_17=(*(s32 (**)(void))(func_001C8098+0xDB8))();
 if(func_0014BA30((char*)arg1+0x5c0,(char*)arg2+0x5c0)==0){var_17=1;M2C_FIELD(arg0,s32*,0x98)=2;}
 temp_3=M2C_FIELD(arg1,s32*,0x5ed0);if(temp_3!=M2C_FIELD(arg2,s32*,0x5ed0)){M2C_FIELD(arg0,s32*,0x5ed0)=temp_3;M2C_FIELD(arg0,s32*,0x98)=2;var_17=1;}
 temp_3_2=M2C_FIELD(arg1,s32*,0x5eb0);if(temp_3_2!=M2C_FIELD(arg2,s32*,0x5eb0)){M2C_FIELD(arg0,s32*,0x5eb0)=temp_3_2;M2C_FIELD(arg0,s32*,0x98)=2;var_17=1;}
 temp_3_3=M2C_FIELD(arg1,s32*,0x5eb4);if(temp_3_3!=M2C_FIELD(arg2,s32*,0x5eb4)){M2C_FIELD(arg0,s32*,0x5eb4)=temp_3_3;M2C_FIELD(arg0,s32*,0x98)=2;var_17=1;}
 temp_3_4=M2C_FIELD(arg1,s32*,0x5eb8);if(temp_3_4!=M2C_FIELD(arg2,s32*,0x5eb8)){M2C_FIELD(arg0,s32*,0x5eb8)=temp_3_4;M2C_FIELD(arg0,s32*,0x98)=2;var_17=1;}
 temp_3_5=M2C_FIELD(arg1,s32*,0x5ebc);if(temp_3_5!=M2C_FIELD(arg2,s32*,0x5ebc)){M2C_FIELD(arg0,s32*,0x5ebc)=temp_3_5;M2C_FIELD(arg0,s32*,0x98)=2;var_17=1;}
 if(func_0014BA30((char*)arg1+0x5ea0,(char*)arg2+0x5ea0)==0){M2C_FIELD(arg0,s32*,0x98)=2;var_17=1;M2C_FIELD(arg0,s64*,0x5ea0)=(s64)M2C_FIELD(arg1,s64*,0x5ea0);M2C_FIELD(arg0,s64*,0x5ea8)=(s64)M2C_FIELD(arg1,s64*,0x5ea8);}
 temp_4=M2C_FIELD(arg1,s32*,0x5ee4);if(temp_4!=M2C_FIELD(arg2,s32*,0x5ee4)){M2C_FIELD(arg0,s32*,0x5ee4)=temp_4;M2C_FIELD(arg0,s32*,0x98)=2;var_17=1;}return var_17;
}
