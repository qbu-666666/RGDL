namespace RGDL{
    ll rand_number::rand_a_number(ll mod=ll_max){
        return (ll)rand()*rand()*rand()%mod;
    }
    template<typename T,typename rand_func>
    void rand_number::rand_a_sequence(int n,std::vector<T>& vec,rand_func rf){
        vec.clear();
        while(n--) vec.push_back(rf.get_rand());
    }
}