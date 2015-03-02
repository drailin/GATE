#include<BObject.h>

//=======================================================
void gate::BObject::Info(ostream& s) const{
//=======================================================
    
    s << " Data type" << this->GetDataType()<< std::endl;
    
    s << " Object ID" << this->GetID()<< std::endl;
    
}

//=======================================================
ostream& operator << (ostream& s, const gate::BObject& obj) {
//=======================================================

    obj.Info(s);
  
    return s; 
}