//RGDL-batch_generate
namespace RGDL{
    template<typename mainfunc>
    void batch_generate_data(char** file_name,int n,mainfunc function){
        std::ofstream of;
        for(int i=0;i<n;++i) of.open(file_name[i]),function.run(),of.close();
    }
}