typedef struct { s32 id, priority; s32 value, extra; } Entry91490;
s32 D_00484478; s32 D_0048447C; extern Entry91490 D_00793E60[];
void func_00191738(void);
void func_00191490(s32 id,s32 priority,s32 value,s32 extra){
 s32 count=D_00484478;
 s32 i;
 for(i=0;i<count;i++) if(D_00793E60[i].id==id) return;
 s32 pos=count;
 if(count>0 && priority<D_00793E60[count-1].priority){
  pos=count;
  while(pos>0 && priority<D_00793E60[pos-1].priority){D_00793E60[pos]=D_00793E60[pos-1];pos--;}
 }
 D_00793E60[pos].id=id; D_00793E60[pos].priority=priority;
 D_00793E60[pos].value=value; D_00793E60[pos].extra=extra;
 if(D_0048447C<=pos) D_0048447C++;
 D_00484478=count+1;
 func_00191738();
}
