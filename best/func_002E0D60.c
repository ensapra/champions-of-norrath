extern s32 D_00446074,D_00446078; void DeleteSema_2(s32); s32 func_002E0D60(void){s32 *p=&D_00446074;if(*p>=0){DeleteSema_2(*p);*p=-1;DeleteSema_2(D_00446078);}return 1;}
