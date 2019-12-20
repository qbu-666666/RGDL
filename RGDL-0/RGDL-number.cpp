namespace RGDL{
    ll rand_number::rand_a_integer(ll mod=ll_max){
        return (ll)rand()*rand()*rand()%mod;
    }
    double rand_number::rand_a_float(){
        return (double)rand_a_integer()/rand_a_integer();
    }
    template<typename T,typename rand_func>
    void rand_number::rand_a_sequence(int n,std::vector<T>& vec,rand_func rf){
        vec.clear();
        while(n--) vec.push_back(rf.get_rand());
    }
}