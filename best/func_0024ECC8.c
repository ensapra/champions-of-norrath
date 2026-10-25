s8 *func_00166F48(s32 *); extern u8 D_007D8A90[];
s8 *func_0024ECC8(s32 arg0) {
 s32 var_5; s8 *temp_6; s8 *var_2; s8 *var_4; s8 temp_3;
 var_2=func_00166F48((s32*)D_007D8A90); temp_6=var_2;
 if(temp_6!=NULL){var_5=0;if(arg0>=0){var_4=temp_6; loop_3: temp_3=*var_4;var_4+=0x50;var_2=NULL;if(temp_3!=0){var_5+=1;if(arg0<var_5)goto block_5;goto loop_3;}}else{block_5: var_2=temp_6+(arg0*0x50);}}
 return var_2;
}
