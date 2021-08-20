#include "common_function.h"
#include "BaseObject.h"
#define WIDTH_AMO_LASER 35
#define HEIGHT_AMO_LASER 5
#define WIDTH_AMO_SPHERE 10
#define HEIGHT_AMO_SPHERE 10
 
class AmoObject : public BaseObject
{
public:
enum AmoType
{
 NONE,
 LASER,
 SPHERE
};
 
AmoObject();
~AmoObject();
 
void HandleInputAction(SDL_Event events, SDL_Rect rect_obj);
void HandleMove(const int x_boder, const int y_border);
unsigned int get_type() const {return amo_type_;}
 
private:
int x_val_;
int y_val_;
bool is_move_;
unsigned int amo_type_;
};
 
