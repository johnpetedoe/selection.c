#include <unistd.h>


int main ( void ) {
    t_position *P;
    t_position *nth_sub_posotion_P;

    P = new_position();                                           // P
    n_th_sub_position_P = P->morphisms[1](P);                     // (p ..| P)
    
    assert( 
        is_vector(
            nth_sub_position_P->morphisms[0](P)
        ) 
    == true );                                                    // (INCL ((p .. | P) P) V)

    assert( 
        is_vector( 
            nth_sub_position_P->morphisms[2](                    
                sub_position_P
            ) 
        ) 
    == true );                                                   // ( INCL (m (p .. | P)) V)

    assert(                                                     
        is_real_number( 
            nth_sub_position_P->properties[0]( 
                nth_sub_position_P 
            ) 
        ), 
        == true 
    );                                                           // (INCL (E (p .. | P)) R)       # D                                                                 
    
    assert( 
        is_real_number(
            P->properties[0]( P ) 
        ),
        == true;
    );                                                          // (INCL (E P) )

    /////

    assert(
        is_vector (
            subtract(nth_sub_position_P, P);
        ),
        == true;                                                 // (- (p ..|P) P)
    )


    return (0);
}
