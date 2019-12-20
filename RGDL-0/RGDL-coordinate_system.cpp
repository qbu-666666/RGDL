namespace RGDL{
    point rand_coordinate_system::rand_a_point(void){
        return point(rand_number_self.rand_a_integer(),rand_number_self.rand_a_integer());
    }
    template<typename randfunc>
    void rand_coordinate_system::rand_a_function(int n,std::vector<double>& function,randfunc rf){
        function.clear();
        for(int i=0;i<=n;++i) function.push_back(rf.get_rand());
    }
    template<typename randfunc>
    void rand_coordinate_system::rand_a_function(int n,std::vector<ll>& function,randfunc rf){
        function.clear();
        for(int i=0;i<=n;++i) function.push_back(rf.get_rand());
    }
}