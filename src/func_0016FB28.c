s64 func_00170968(s64,s64);
s32 func_0016FB28(s64 *arg0) {
 s64 end,cur; cur=*(volatile s64*)&arg0[0]; end=*(volatile s64*)&arg0[1]; s64 v;
 if(cur==end) return 1;
 v=cur+func_00170968((end-cur)+arg0[2]-1,arg0[2]);
 arg0[0]=v; if(end<v) arg0[0]=end;
 arg0[3]=func_00170968(arg0[0]<<16,end); return 0;
}
