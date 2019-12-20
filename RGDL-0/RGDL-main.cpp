#pragma once
#include<vector>
#include<string>
#include<cstdlib>
namespace RGDL{
    typedef long long ll;
    const ll ll_max=0x7fffffffffffffff;
    struct point{
        ll x,y;
        point(ll x_=0,ll y_=0) :x(x_),y(y_) {}
    };
    struct line{
        ll k,b;
        line(ll k_=0,ll b_=0) :k(k_),b(b_) {}
    };
    std::vector<char> en_string;
    void init(unsigned seed){
        std::srand(seed),en_string.clear();
        for(int i='A';i<='Z';++i) en_string.push_back(i);
        for(int i='a';i<='z';++i) en_string.push_back(i);
    }
    class rand_number{
        public:
            ll rand_a_number(ll);
            template<typename T,typename rand_func>
            void rand_a_sequence(int,std::vector<T>&,rand_func);
    }rand_number_self;
    class rand_string{
        public:
            char rand_a_small_letter(void);
            char rand_a_big_letter(void);
            char rand_a_char_in(std::vector<char>);
            void rand_a_string_in(int,std::string&,std::vector<char>);
    }rand_string_self;
    class rand_graph{
    }rand_graph_self;
    class rand_coordinate_system{
        public:
            point rand_a_point(void);
            line rand_a_line(void);
    }rand_coordinate_system_self;
}
#include"RGDL-number.cpp"
#include"RGDL-string.cpp"
// #include"RGDL-graph.cpp"
#include"RGDL-Coordinate_system.cpp"