void xmlHashLookup2(void *a, void *b, void *c) { xmlHashLookup3(a,b,c,0); }
void xmlHashLookup(void *a, void *b, void *c) { xmlHashLookup3(a,b,0,0); }
void xmlHashUpdateEntry2(void*a,void*b,void*c,void*d,void*e){ xmlHashUpdateEntry3(a,b,c,0,e); }
void xmlHashUpdateEntry(void*a,void*b,void*c,void*d){ xmlHashUpdateEntry3(a,b,0,0,c,d); }
