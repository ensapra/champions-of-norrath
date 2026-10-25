typedef struct Big {struct Big*next;s32 k,max,sign,n;u32 x[1];} Big;
extern Big *func_001AA860(void*,s32);
Big *func_001AACE8(void*ctx,Big*a,Big*b){
Big*c,*t;s32 na=a->n,nb=b->n,n;u32 *z,*ze,*bp,*be,*ap,*ae,*q,*r,*abase;u32 y,carry,lo,hi,v,w;
if(na<nb){t=a;a=b;b=t;na=nb;nb=b->n;}
n=na+nb;c=func_001AA860(ctx,a->k+(a->max<n));z=c->x;ze=z+(na+nb);
for(q=z;q<ze;q++)*q=0;
bp=b->x;be=bp+nb;abase=a->x;ae=abase+na;r=z;
for(;bp<be;bp++,r++){
y=*bp&65535;
if(y){q=r;carry=0;ap=abase;
do{v=*ap++;w=*q;lo=(v&65535)*y+(w&65535)+carry;hi=(v>>16)*y+(w>>16);carry=lo>>16;((u16*)q)[0]=lo;lo=hi+carry;((u16*)q)[1]=lo;q++;carry=lo>>16;}while(ap<ae);
*q=carry;}
y=*bp>>16;
if(y){q=r;ap=abase;carry=0;lo=*q;w=lo;
do{v=*ap++;((u16*)q)[0]=lo;lo=(v&65535)*y+(w>>16)+carry;((u16*)q)[1]=lo;q++;w=*q;lo=(v>>16)*y+(w&65535)+(lo>>16);carry=lo>>16;}while(ap<ae);
*q=lo;}
}
q=z+(na+nb);while(n>0){q--;if(*q)break;n--;}c->n=n;return c;
}
