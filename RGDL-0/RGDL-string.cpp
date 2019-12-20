namespace RGDL{
    char rand_string::rand_a_big_letter(void){
        return rand()%26+'A';
    }
    char rand_string::rand_a_small_letter(void){
        return rand()%26+'a';
    }
    char rand_string::rand_a_char_in(std::vector<char> string_set=en_string){
        return string_set[rand()%(int)string_set.size()];
    }
    void rand_string::rand_a_string_in(int length,std::string& s,std::vector<char> string_set=en_string){
        s.clear();
        while(length--) s+=string_set[rand()%(int)string_set.size()];
    }
}