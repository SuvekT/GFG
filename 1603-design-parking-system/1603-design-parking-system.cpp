class ParkingSystem {
public:
 ParkingSystem(int big, int medium, int small) {
        this->big = big;
        this->medium = medium;
        this->small = small;
    }
    
    bool addCar(int carType) {
        switch(carType){
            case 1:
                if(big > 0){
                    big--;
                    return true;
                }
                break;
            case 2:
                if(medium > 0){
                    medium--;
                    return true;
                }
                break;
            case 3:
                if(small > 0){
                    small--;
                    return true;
                }
                break;
        }
        return false;
    }
    
private:
    int big, medium, small;
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */