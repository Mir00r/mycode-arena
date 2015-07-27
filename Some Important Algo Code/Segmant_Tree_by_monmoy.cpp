struct X{
    int lazy ;
    int sum,maxSum,maxPre,maxSuf;
};

#define MAX 100000

X tree[4*MAX] ;
int x,y,add ;

void calculate(X &u, int len){
    //u.sum = u.sum + u.lazy*len ;
}

void merge(X &p, X &u, X &v){
    p.maxPre = max(u.maxPre, u.sum + v.maxPre) ;
    p.maxSuf = max(v.maxSuf, u.maxSuf + v.sum) ;
    p.maxSum = max(max (u.maxSum, v.maxSum), u.maxSuf + v.maxPre) ;
    p.sum = u.sum + v.sum ;
}

void propagate(X &p, X &u, X &v){
    u.lazy += p.lazy ;
    v.lazy += p.lazy ;
}

void lazyreset(X &p){
    p.lazy = 0 ;
}

void lazyupdate(X &p){
    p.lazy += add ;
}

void update(int b, int e, int node){
    int m = (b+e)>>1 ;
    int u = node<<1 ;
    int v = u+1 ;

    if(b >= x && e <= y){
        lazyupdate(tree[node]);
        calculate(tree[node],e-b+1);

        if(b != e)
            propagate(tree[node],tree[u],tree[v]);
        lazyreset(tree[node]);

        return ;
    }

    if(b>y || e<x){
        calculate(tree[node],e-b+1) ;

        if(b != e)
            propagate(tree[node],tree[u],tree[v]) ;
        lazyreset(tree[node]) ;

        return ;
    }

    propagate(tree[node],tree[u],tree[v]) ;
    lazyreset(tree[node]) ;

    update(b, m, u) ;
    update(m+1, e, v) ;

    merge(tree[node], tree[u], tree[v]) ;
}

X ans ;

void query(int b, int e, int node){
    int m = (b+e)>>1 ;
    int u = node<<1 ;
    int v = u+1 ;

    if(b >= x && e <= y){
        calculate(tree[node], e-b+1) ;
        if(b != e)
            propagate(tree[node], tree[u], tree[v]) ;
        lazyreset(tree[node]) ;

        merge(ans, ans, tree[node]) ;

        return ;
    }

    if(b > y || e < x){
        calculate(tree[node], e-b+1) ;
        if(b != e)
            propagate(tree[node], tree[u], tree[v]) ;
        lazyreset(tree[node]) ;

        return ;
    }

    propagate(tree[node],tree[u],tree[v]) ;
    lazyreset(tree[node]) ;

    query(b, m, u) ;
    query(m+1, e, v) ;

    merge(tree[node], tree[u],tree[v]) ;
}
