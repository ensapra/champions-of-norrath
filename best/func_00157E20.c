extern s32 D_00463138[];
f32 sqrtf(f32);
typedef struct {s32 x[3];} Perm;
void func_00157E20(f32 *out,f32 *m){
 f32 q[4],a=m[0],b=m[4],c=m[8],sum,root,scale;
 Perm p; p=*(Perm*)D_00463138;
 s32 i=0,j,k;
 sum=a+b+c;
 if(sum>0.0f){root=sqrtf(sum+1.0f);out[3]=root*0.5f;scale=0.5f/root;out[0]=(m[5]-m[7])*scale;out[1]=(m[6]-m[2])*scale;out[2]=(m[1]-m[3])*scale;}
 else{if(a<b)i=1;if(m[i*4]<c)i=2;j=p.x[i];k=p.x[j];root=sqrtf(1.0f+m[i*4]-m[j*4]-m[k*4]);q[i]=root*0.5f;if(root!=0.0f)scale=0.5f/root;else scale=0.0f;q[3]=(m[j*3+k]-m[k*3+j])*scale;q[j]=(m[i*3+j]+m[j*3+i])*scale;q[k]=(m[i*3+k]+m[k*3+i])*scale;out[0]=q[0];out[1]=q[1];out[2]=q[2];out[3]=q[3];}
}
