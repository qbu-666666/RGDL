namespace RGDL{
    template<typename mainfunc>
    void batch_generate::batch_generate_data(char** file_name,int n,mainfunc mainfunction){
        std::ofstream of;
        for(int i=0;i<n;++i){
            of.open(file_name[i]);
            mainfunction.run();
            of.close();
        }
    }
}