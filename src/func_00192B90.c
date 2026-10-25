typedef struct {f32 x,y,z,w;} V4; typedef struct {V4 r[4];} M4;
void func_00192708(M4*); void func_00191EF0(V4*,V4*,V4*); void func_00191FD0(V4*,V4*); void func_00192490(M4*,M4*,V4*); void func_001920D8(M4*,M4*);
void func_00192B90(M4*out,V4*pos,V4*at,V4*up){ M4 m; V4 d; func_00192708(&m); func_00191EF0(&d,up,at); func_00191FD0(&m.r[0],&d); func_00191FD0(&m.r[2],at); func_00191EF0(&m.r[1],&m.r[2],&m.r[0]); func_00192490(&m,&m,pos); func_001920D8(out,&m); }
