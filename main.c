#include <unistd.h>

void f0 (t_position *P, t_position  *nth_sub_position_P) {
    assert( 
        is_vector(
            position->
                morphisms->
                    implementations[0][0](n_th_sub_position_P, P);
        ) 
    == true );                                                    // (INCL ((p .. | P) P) V)

    assert( 
        is_vector( 
            position->
                morphisms->
                    implementations[2][0](                    
                n_th_sub_position_P
            ) 
        ) 
    == true );                                                   // ( INCL (m (p .. | P)) V)

    assert(                                                     
        is_real_number( 
            nth_sub_position_P->
                properties[0]( 
                    nth_sub_position_P 
                ) 
        ), 
        == true 
    );                                                           // (INCL (E (p .. | P)) R)       # D                                                                 
    
    assert( 
        is_real_number(
            P->properties[0]( P ); 
        ),
        == true;
    );                                                          // (INCL (E P) R) 
    return (void);
}

void f1 (t_categorey *position, t_position *P, t_position *n_th_sub_position_P) {
    assert (
        is_vector (
            position->
                subtract(
                    nth_sub_position_P, 
                    P
                );
        ),
        == true;                                                // (INCL (- (p ..|P) P) V)
    );

    assert (
        is_vector(
            position->subtract(
                n_th_sub_position_P,
                compliment(P)
            )
        )
        == true
    );                                                            // (- (p..|P) {~P})     

    assert (
        is_set(
            position->
                morphisms->
                    implementations[4][0](
                        0, 
                        position->
                            morphisms->
                                length
                        
                    )
        )
        == true;                                //(INCL {0 .. (length morphisms)} S)
    )

    assert (
        is_natural_number (
            resolve(
                position->
                    morphisms->
                        implementations[4][0](
                            0, 
                            position->
                                morphisms->
                                    length
                        
                        )
            )
        )
        == true;
    )

    assert (
        position->morphisms[3][0](
            compliment(P)->properties[
                position->
                    morphisms->
                        resolve(
                            position->
                                morphisms->
                                    implementations[4][0](
                                        0, 
                                        position->
                                            morphisms->
                                                length
                                        
                                    )
                        )
            ]
        );
    );
    
    assert (
        
    );

    return (0);
}

int main ( void ) {
    t_categorey     position;
    t_position      *P;
    t_position      *nth_sub_posotion_P;

    P = new_position();                                           // P
    n_th_sub_position_P = P->morphisms[1][0](P);                     // (p ..| P)
    
    assert(

    );
    return (0);
}
