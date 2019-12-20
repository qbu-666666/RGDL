namespace RGDL{
    point rand_coordinate_system::rand_a_point(void){
        return point(rand_number_self.rand_a_number(),rand_number_self.rand_a_number());
    }
    line rand_coordinate_system::rand_a_line(void){
        return line(rand_number_self.rand_a_number(),rand_number_self.rand_a_number());
    }
}