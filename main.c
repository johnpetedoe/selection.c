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
        == true;                                                // (INCL {0 .. (length morphisms)} S)
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

            position->
                morphisms->
                    implementations[4][1](
                        new_variadic_ref_array(
                            new_variadic_ref_array(
                                theta_0, 
                                phi_0
                            ),
                            new_variadic_ref_array(
                                theta_1,
                                phi_1
                            )
                        ),

                        new_variadic_ref_array(
                            new_variadic_ref_array(
                                x_0,
                                y_0
                            ),
                            new_variadic_ref_array(
                                x_1,
                                y_1
                            )
                        )
                    );
        ); // (:= ([{}] {~P}) { [[theta_0, phi_0], [theta1, phi_1]] [[x_0 y_0], [x_1, x_1]])
    );

    return (0);
}

void f2 (t_categorey *t_categorey, t_position *P, t_position *sub_P)

int main ( void ) {
    t_categorey     position;
    t_position      *P;
    t_position      *nth_sub_posotion_P;

    P = new_position();                                              // P
    n_th_sub_position_P = P->morphisms[1][0](P);                     // (p ..| P)

    f0(P, n_th_sub_position_P);
    f1(P, n_th_sub_position_P);
    
    return (0);
}
