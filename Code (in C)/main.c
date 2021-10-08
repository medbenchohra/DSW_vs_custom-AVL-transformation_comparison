  #include <stdio.h>
  #include <stdlib.h>
  #include <time.h>
  typedef int bool ;

  #define True 1
  #define False 0
  static unsigned int avl_noeud,dsw_noeud,avl_rot,dsw_rot,M,avl_nbr_noeud;
  /** Implémentation **\: TABLEAU DE ENTIERS**/

  /** Tableaux **/

  typedef int Typeelem_V12i ;
  typedef Typeelem_V12i * Typevect_V12i ;

  Typeelem_V12i Element_V12i ( Typevect_V12i V , int I1  )
    {
      return  *(V + I1-1 ) ;
    }

  void Aff_element_V12i ( Typevect_V12i V  , int I1 ,  Typeelem_V12i Val )
    {
      *(V + I1-1 ) = Val ;
    }


  /** Implémentation **\: ARBRE BINAIRE DE ENTIERS**/

  /** Arbres de recherche binaire **/

  typedef int Typeelem_Ai   ;
  typedef struct Noeud_Ai * Pointeur_Ai ;

  struct Noeud_Ai
    {
      Typeelem_Ai  Val ;
      Pointeur_Ai Fg ;
      Pointeur_Ai Fd ;
      Pointeur_Ai Pere ;
     } ;

  Typeelem_Ai Info_Ai( Pointeur_Ai P )
    { dsw_noeud++;return P->Val;   }

  Pointeur_Ai Fg_Ai( Pointeur_Ai P)
    { dsw_noeud++;return P->Fg ; }

  Pointeur_Ai Fd_Ai( Pointeur_Ai P)
    { dsw_noeud++;return P->Fd ; }

  Pointeur_Ai Pere_Ai( Pointeur_Ai P)
    {dsw_noeud++; return P->Pere ; }

  void Aff_info_Ai ( Pointeur_Ai P, Typeelem_Ai Val)
    {
        dsw_noeud++;
       P->Val = Val ;
    }

  void Aff_fg_Ai( Pointeur_Ai P, Pointeur_Ai Q)
    {dsw_noeud++; P->Fg =  Q;  }

  void Aff_fd_Ai( Pointeur_Ai P, Pointeur_Ai Q)
    {dsw_noeud++; P->Fd =  Q ; }

  void Aff_pere_Ai( Pointeur_Ai P, Pointeur_Ai Q)
    {dsw_noeud++; P->Pere =  Q ; }

  void Creernoeud_Ai( Pointeur_Ai *P)
    {
      *P = (struct Noeud_Ai *) malloc( sizeof( struct Noeud_Ai))   ;
      (*P)->Fg = NULL;
      (*P)->Fd = NULL;
      (*P)->Pere = NULL;
    }

  void Liberernoeud_Ai( Pointeur_Ai P)
    { free( P ) ; }


  /** Implémentation **\: ARBRE BINAIRE DE STRUCTURES**/

  /** Structures dynamiques **/

  typedef struct Uii * Pointeur_Uii  ;
  typedef int Type1_Uii ;
  typedef int Type2_Uii ;

  struct Uii
    {
      Type1_Uii Champ1 ;
      Type2_Uii Champ2 ;
    };

  Type1_Uii Struct1_Uii ( Pointeur_Uii S)
    {
       return  S->Champ1 ;
    }

  Type2_Uii Struct2_Uii ( Pointeur_Uii S)
    {
       return  S->Champ2 ;
    }

  void Aff_struct1_Uii ( Pointeur_Uii S, Type1_Uii Val )
    {
       S->Champ1 = Val ;
    }

  void Aff_struct2_Uii ( Pointeur_Uii S, Type2_Uii Val )
    {
       S->Champ2 = Val ;
    }

  void Alloc_struct_Uii( Pointeur_Uii *S)
     {
      *S = (struct Uii *) malloc( sizeof( struct Uii))   ;
     }

  void Liber_struct_Uii( Pointeur_Uii S )
     { free(S); }


  /** Arbres de recherche binaire **/

  typedef Pointeur_Uii Typeelem_AUii   ;
  typedef struct Noeud_AUii * Pointeur_AUii ;

  struct Noeud_AUii
    {
      Typeelem_AUii  Val ;
      Pointeur_AUii Fg ;
      Pointeur_AUii Fd ;
      Pointeur_AUii Pere ;
     } ;

  Typeelem_AUii Info_AUii( Pointeur_AUii P )
    { avl_noeud++; return P->Val;   }

  Pointeur_AUii Fg_AUii( Pointeur_AUii P)
    {avl_noeud++; return P->Fg ; }

  Pointeur_AUii Fd_AUii( Pointeur_AUii P)
    { avl_noeud++;return P->Fd ; }

  Pointeur_AUii Pere_AUii( Pointeur_AUii P)
    { avl_noeud++;return P->Pere ; }

  void Aff_info_AUii ( Pointeur_AUii P, Typeelem_AUii Val)
    {
        avl_noeud++;
       P->Val = Val ;
    }

  void Aff_fg_AUii( Pointeur_AUii P, Pointeur_AUii Q)
    { avl_noeud++;P->Fg =  Q;  }

  void Aff_fd_AUii( Pointeur_AUii P, Pointeur_AUii Q)
    { avl_noeud++;P->Fd =  Q ; }

  void Aff_pere_AUii( Pointeur_AUii P, Pointeur_AUii Q)
    { avl_noeud++;P->Pere =  Q ; }

  void Creernoeud_AUii( Pointeur_AUii *P)
    {
      *P = (struct Noeud_AUii *) malloc( sizeof( struct Noeud_AUii))   ;
      (*P)->Fg = NULL;
      (*P)->Fd = NULL;
      (*P)->Pere = NULL;
    }

  void Liberernoeud_AUii( Pointeur_AUii P)
    { free( P ) ; }


  /** Variables du programme principal **/
  Typevect_V12i T;
  Pointeur_Ai A;
  Pointeur_AUii Avl;
  int V;
  int K;
  int J;
  int _Px1;
  int _Px2;

  /** Fonctions standards **/

  int Aleanombre( int N )
    { return ( rand() % N ); }

  int Max (int a, int b)
    {
      if (a > b) return(a);
      else return(b);
    }


  /** Prototypes des fonctions **/

  void Aleatab (Typevect_V12i *T);
  int  Rech_arb (Pointeur_Ai *A , int *V) ;
  void Insertarb (Pointeur_Ai *A , int *V);
  int  Nbr_noeud_arb (Pointeur_Ai *A) ;
  void Rot_g (Pointeur_Ai *A , Pointeur_Ai *Gp , Pointeur_Ai *P , Pointeur_Ai *C);
  Pointeur_Ai Rot_d (Pointeur_Ai *A , Pointeur_Ai *Gp , Pointeur_Ai *P , Pointeur_Ai *C) ;
  void Make_rot (Pointeur_Ai *A , int *C);
  void Tree_to_vine (Pointeur_Ai *A);
  void Vine_to_tree (Pointeur_Ai *A);
  void Dsw (Pointeur_Ai *A);
  int  Balance (Pointeur_Ai *A) ;
  bool  Verif_equi_dsw (Pointeur_Ai *A) ;
  void Calcul_bal (Pointeur_AUii *A);
  bool  Verif_equi (Pointeur_AUii *A) ;
  Pointeur_AUii Rotd_avl (Pointeur_AUii *A) ;
  Pointeur_AUii Rotg_avl (Pointeur_AUii *A) ;
  Pointeur_AUii Add_imaginary_root (Pointeur_AUii *A) ;
  void Free_imaginary_root (Pointeur_AUii *Im);
  Pointeur_AUii First_post (Pointeur_AUii *A) ;
  Pointeur_AUii Suiv_post (Pointeur_AUii *A) ;
  void Equilibrer (Pointeur_AUii *A);
  void Arb_to_avl (Pointeur_AUii *A);
  void Insertavl (Pointeur_AUii *Root , int *V);
  int  Prof_arb (Pointeur_AUii *Root) ;
  int  Prof_arb_dsw (Pointeur_Ai *Root) ;
  void Free_dsw (Pointeur_Ai *A);
  void Free_avl (Pointeur_AUii *A);

  /*  ===============================  */
  /* Creer un tableau aleatoire */

  void Aleatab (Typevect_V12i *T)
    {
      /** Variables locales **/
      int N;
      int I;

      /** Corps du module **/
     for( I  =  1 ;I <=  M ; ++I){
       N  =  Aleanombre(1000000 ) ;
       Aff_element_V12i(*T , I   , N ) ;

     } ;

    }
  /*______________________________________Les Modules de DSW_____________________________________________*/
  /* Rechercher une valeur V dans un arb A */

  int  Rech_arb (Pointeur_Ai *A , int *V)
    {
      /** Variables locales **/
      int  Rech_arb2 ;
      Pointeur_Ai _Px1;
      Pointeur_Ai _Px2;

      /** Corps du module **/
     if( *A != NULL) {
       if( Info_Ai(*A ) == *V) {
         Rech_arb2  =  1 ;
         }
       else
         {
         if( Info_Ai(*A ) > *V) {
           _Px1 =  Fg_Ai(*A ) ;
           Rech_arb2  =  Rech_arb ( &_Px1, & *V ) ;
           }
         else
           {
           _Px2 =  Fd_Ai(*A ) ;
           Rech_arb2  =  Rech_arb ( &_Px2, & *V ) ;

         }
       } }
     else
       {
       Rech_arb2  =  0 ;

     }
     return Rech_arb2 ;
    }
  /* -------------------------------------- */
  /* Insertion dans l'arb qui va être equilibré par la dsw */

  void Insertarb (Pointeur_Ai *A , int *V)
    {
      /** Variables locales **/
      Pointeur_Ai N;
      Pointeur_Ai P;

      /** Corps du module **/
     P  =  *A ;
     if( ( Rech_arb ( & *A , & *V ) == 0 ) && ( P != NULL )) {
       while( ( ( *V > Info_Ai(P ) ) || ( Fg_Ai(P ) != NULL ) ) && ( ( *V < Info_Ai(P ) ) || ( Fd_Ai(P ) != NULL ) )) {
         if( ( *V > Info_Ai(P ) ) && ( Fd_Ai(P ) != NULL )) {
           P  =  Fd_Ai(P ) ;
           }
         else
           {
           if( ( *V < Info_Ai(P ) ) && ( Fg_Ai(P ) != NULL )) {
             P  =  Fg_Ai(P );
           }
         }
       } ;
       Creernoeud_Ai(&N ) ;
       Aff_info_Ai(N , *V ) ;
       if( *V < Info_Ai(P )) {
         Aff_fg_Ai(P , N ) ;
         }
       else
         {
         Aff_fd_Ai(P , N ) ;

       } }
     else
       {
       if( *A == NULL) {
         Creernoeud_Ai(&*A ) ;
         Aff_info_Ai(*A , *V ) ;

       }
     }
    }
  /* -------------------------------------- */
  /* Calculer le nombre des noeuds d'un arb */

  int  Nbr_noeud_arb (Pointeur_Ai *A)
    {
      /** Variables locales **/
      int  Nbr_noeud_arb2 ;
      Pointeur_Ai _Px1;
      Pointeur_Ai _Px2;

      /** Corps du module **/
     if( ( *A != NULL )) {
       _Px1 =  Fd_Ai(*A ) ;
       _Px2 =  Fg_Ai(*A ) ;
       Nbr_noeud_arb2  =  1 + Nbr_noeud_arb ( &_Px1) + Nbr_noeud_arb ( &_Px2) ;
       }
     else
       {
       Nbr_noeud_arb2  =  0 ;

     } ;

     return Nbr_noeud_arb2 ;
    }
  /*------------------------------------   */
  /* rotation gauche d'un noeud P de pere Gp et de fils C dans un arb de racine A */

  void Rot_g (Pointeur_Ai *A , Pointeur_Ai *Gp , Pointeur_Ai *P , Pointeur_Ai *C)
    {

      /** Corps du module **/
     dsw_rot ++ ;
     if( ( *Gp != NULL )) {
       Aff_fd_Ai(*Gp , *C ) ;
       }
     else
       {
       *A  =  *C ;

     } ;
     Aff_fd_Ai(*P , Fg_Ai(*C ) ) ;
     Aff_fg_Ai(*C , *P ) ;

    }
  /*  -----------------------------     */
  /* rotation gauche d'un noeud P de pere Gp et de fils C dans un arb de racine A*/

  Pointeur_Ai Rot_d (Pointeur_Ai *A , Pointeur_Ai *Gp , Pointeur_Ai *P , Pointeur_Ai *C)
    {
      /** Variables locales **/
      Pointeur_Ai Rot_d2 ;

      /** Corps du module **/
     dsw_rot ++ ;
     if( ( *Gp != NULL )) {
       Aff_fd_Ai(*Gp , *C ) ;
       }
     else
       {
       *A  =  *C ;

     } ;
     Aff_fg_Ai(*P , Fd_Ai(*C ) ) ;
     Aff_fd_Ai(*C , *P ) ;
     Rot_d2  =  *Gp ;

     return Rot_d2 ;
    }
  /*  ------------------------------------       */
  /* appliquer C rotations gauche dans un arb de racine A */

  void Make_rot (Pointeur_Ai *A , int *C)
    {
      /** Variables locales **/
      Pointeur_Ai Gp;
      Pointeur_Ai P;
      Pointeur_Ai Ch;
      int I;

      /** Corps du module **/
     Gp  =  NULL ;
     P  =  *A ;
     Ch  =  Fd_Ai(P ) ;
     for( I  =  1 ;I <=  *C ; ++I){
       if( ( Ch != NULL )) {
         Rot_g ( & *A , & Gp , & P , & Ch ) ;
         Gp  =  Ch ;
         P  =  Fd_Ai(Gp ) ;
         if( ( P != NULL )) {
           Ch  =  Fd_Ai(P ) ;
           }
         else
           {
           Ch  =  NULL ;

         } ;

       } ;

     } ;

    }
  /*   ------------------------------------      */
  /* Transformer un arb à une liste ( vine ) */

  void Tree_to_vine (Pointeur_Ai *A)
    {
      /** Variables locales **/
      Pointeur_Ai Gp;
      Pointeur_Ai P;
      Pointeur_Ai Lc;

      /** Corps du module **/
     Gp  =  NULL ;
     P  =  *A ;
     while( ( P != NULL )) {
       Lc  =  Fg_Ai(P ) ;
       if( ( Lc != NULL )) {
         Gp  =  Rot_d ( & *A , & Gp , & P , & Lc ) ;
         P  =  Lc ;
         }
       else
         {
         Gp  =  P ;
         P  =  Fd_Ai(P ) ;

       } ;

     } ;

    }
  /*--------------------------------------    */
  /* Transformer la liste creé vers un arb equilibré */

  void Vine_to_tree (Pointeur_Ai *A)
    {
      /** Variables locales **/
      int N;
      int M;
      int _Px1;
      int _Px2;

      /** Corps du module **/
     N  =  Nbr_noeud_arb ( & *A ) ;
     M  =  1 ;
     while( ( M <= N + 1 )) {
       M  =  2 * M ;

     } ;
     M  =  M / 2 - 1 ;
     _Px1 =  N - M ;
     Make_rot ( & *A , &_Px1) ;
     while( ( M > 1 )) {
       _Px2 =  M / 2 ;
       Make_rot ( & *A , &_Px2) ;
       M  =  M / 2 ;

     } ;

    }
  /*--------------------------------------    */
  /* equilibrer l'arb de racine A par la methode de dsw */

  void Dsw (Pointeur_Ai *A)
    {

      /** Corps du module **/
     Tree_to_vine ( & *A ) ;
     Vine_to_tree ( & *A ) ;

    }
  /*--------------------------------------    */
  /* calculer la balance d'un arb de racine A */

  int  Balance (Pointeur_Ai *A)
    {
      /** Variables locales **/
      int  Balance2 ;
      Pointeur_Ai _Px1;
      Pointeur_Ai _Px2;

      /** Corps du module **/
     if( *A != NULL) {
       _Px1 =  Fg_Ai(*A ) ;
       _Px2 =  Fd_Ai(*A ) ;
       Balance2  =  Prof_arb_dsw ( &_Px1) - Prof_arb_dsw ( &_Px2) ;

     } ;

     return Balance2 ;
    }
  /*--------------------------------------    */
  /* verifier l'equilibrage de l'arb A equilibré par la methode de dsw */

  bool  Verif_equi_dsw (Pointeur_Ai *A)
    {
      /** Variables locales **/
      bool  Verif_equi_dsw2 ;
      Pointeur_Ai _Px1;
      Pointeur_Ai _Px2;

      /** Corps du module **/
     if( *A != NULL) {
       if( ( Balance ( & *A ) >= - 1 ) && ( Balance ( & *A ) <= 1 )) {
         _Px1 =  Fg_Ai(*A ) ;
         _Px2 =  Fd_Ai(*A ) ;
         Verif_equi_dsw2  =  Verif_equi_dsw ( &_Px1) && Verif_equi_dsw ( &_Px2) ;
         }
       else
         {
         Verif_equi_dsw2  =  False ;

       } ;
       }
     else
       {
       Verif_equi_dsw2  =  True ;

     } ;

     return Verif_equi_dsw2 ;
    }
  /*__________________Les Modules de Tranformation vers AVL_________________________________*/
  /*--------------------------------------    */
  /* mise à jour des champs balance d'arb qui va transformer vers un avl */

  void Calcul_bal (Pointeur_AUii *A)
    {
      /** Variables locales **/
      Pointeur_AUii _Px1;
      Pointeur_AUii _Px2;
      Pointeur_AUii _Px3;
      Pointeur_AUii _Px4;

      /** Corps du module **/
     if( *A != NULL) {
       _Px1 =  Fg_AUii(*A ) ;
       Calcul_bal ( &_Px1) ;
       _Px2 =  Fg_AUii(*A ) ;
       _Px3 =  Fd_AUii(*A ) ;
       Aff_struct2_Uii(Info_AUii(*A )  , Prof_arb ( &_Px2) - Prof_arb ( &_Px3) ) ;
       _Px4 =  Fd_AUii(*A ) ;
       Calcul_bal ( &_Px4) ;

     } ;

    }
  /*--------------------------------------    */
  /* verifier l'equilibrage de l'arb A transformé vers un avl */

  /* de avl */

  bool  Verif_equi (Pointeur_AUii *A)
    {
      /** Variables locales **/
      bool  Verif_equi2 ;
      Pointeur_AUii _Px1;
      Pointeur_AUii _Px2;

      /** Corps du module **/
     if( *A != NULL) {
       if( ( ( Struct2_Uii(Info_AUii(*A )  ) >= - 1 ) && ( Struct2_Uii(Info_AUii(*A )  ) <= 1 ) )) {
         _Px1 =  Fg_AUii(*A ) ;
         _Px2 =  Fd_AUii(*A ) ;
         Verif_equi2  =  ( Verif_equi ( &_Px1) && Verif_equi ( &_Px2) ) ;
         }
       else
         {
         Verif_equi2  =  False ;

       } ;
       }
     else
       {
       Verif_equi2  =  True ;

     } ;

     return Verif_equi2 ;
    }
  /*--------------------------------------    */
  /* rotation droite d'un noeud */

  Pointeur_AUii Rotd_avl (Pointeur_AUii *A)
    {
      /** Variables locales **/
      Pointeur_AUii Rotd_avl2 ;
      Pointeur_AUii P;
      Pointeur_AUii Tmp;
      Pointeur_AUii Child;
      Pointeur_AUii _Px1;
      Pointeur_AUii _Px2;

      /** Corps du module **/
     avl_rot ++ ;
     Tmp  =  Pere_AUii(*A ) ;
     P  =  Fg_AUii(*A ) ;
     Child  =  Fd_AUii(P ) ;
     Aff_fg_AUii(*A , Child ) ;
     if( Child != NULL) {
       Aff_pere_AUii(Child , *A ) ;

     } ;
     Aff_fd_AUii(P , *A ) ;
     Aff_pere_AUii(*A , P ) ;
     Aff_pere_AUii(P , Tmp ) ;
     if( Tmp != NULL) {
       if( Fg_AUii(Tmp ) == *A) {
         Aff_fg_AUii(Tmp , P ) ;
         }
       else
         {
         Aff_fd_AUii(Tmp , P ) ;

       } ;

     } ;
     Tmp  =  *A ;
     while( ( Tmp != NULL )) {
       _Px1 =  Fg_AUii(Tmp ) ;
       _Px2 =  Fd_AUii(Tmp ) ;
       Aff_struct2_Uii(Info_AUii(Tmp )  , Prof_arb ( &_Px1) - Prof_arb ( &_Px2) ) ;
       Tmp  =  Pere_AUii(Tmp ) ;

     } ;
     Rotd_avl2  =  P ;

     return Rotd_avl2 ;
    }
  /*--------------------------------------    */
  /* rotation gauche d'un noeud */

  Pointeur_AUii Rotg_avl (Pointeur_AUii *A)
    {
      /** Variables locales **/
      Pointeur_AUii Rotg_avl2 ;
      Pointeur_AUii P;
      Pointeur_AUii Tmp;
      Pointeur_AUii Child;
      Pointeur_AUii _Px1;
      Pointeur_AUii _Px2;

      /** Corps du module **/
     avl_rot ++ ;
     Tmp  =  Pere_AUii(*A ) ;
     P  =  Fd_AUii(*A ) ;
     Child  =  Fg_AUii(P ) ;
     Aff_fd_AUii(*A , Child ) ;
     if( Child != NULL) {
       Aff_pere_AUii(Child , *A ) ;

     } ;
     Aff_fg_AUii(P , *A ) ;
     Aff_pere_AUii(*A , P ) ;
     Aff_pere_AUii(P , Tmp ) ;
     if( Tmp != NULL) {
       if( Fg_AUii(Tmp ) == *A) {
         Aff_fg_AUii(Tmp , P ) ;
         }
       else
         {
         Aff_fd_AUii(Tmp , P ) ;

       } ;

     } ;
     Tmp  =  *A ;
     while( ( Tmp != NULL )) {
       _Px1 =  Fg_AUii(Tmp ) ;
       _Px2 =  Fd_AUii(Tmp ) ;
       Aff_struct2_Uii(Info_AUii(Tmp )  , Prof_arb ( &_Px1) - Prof_arb ( &_Px2) ) ;
       Tmp  =  Pere_AUii(Tmp ) ;

     } ;
     Rotg_avl2  =  P ;

     return Rotg_avl2 ;
    }
  /*--------------------------------------    */
  /*creer un noeud qui va etre la nouvelle racine de l'arb afin de
     l'equilibrer par la methode de transformation vers avl */

  Pointeur_AUii Add_imaginary_root (Pointeur_AUii *A)
    {
      /** Variables locales **/
      Pointeur_AUii Add_imaginary_root2 ;
      Pointeur_AUii P;
      Pointeur_Uii Stmp;

      /** Corps du module **/
     Creernoeud_AUii(&P ) ;
     Alloc_struct_Uii(&Stmp ) ;
     Aff_struct1_Uii(Stmp  , 0 ) ;
     Aff_struct2_Uii(Stmp  , 0 ) ;
     Aff_info_AUii(P , Stmp ) ;
     Aff_pere_AUii(P , NULL ) ;
     Aff_fd_AUii(P , *A ) ;
     Aff_pere_AUii(*A , P ) ;
     Add_imaginary_root2  =  P ;

     return Add_imaginary_root2 ;
    }
  /*--------------------------------------    */
  /* liberer le noeud ajouté */

  void Free_imaginary_root (Pointeur_AUii *Im)
    {

      /** Corps du module **/
     Aff_fd_AUii(*Im , NULL ) ;
     Liber_struct_Uii(Info_AUii(*Im ) ) ;
     Liberernoeud_AUii(*Im ) ;
     *Im  =  NULL ;

    }
  /*--------------------------------------    */
  /* le premier postordre d'un arb */

  Pointeur_AUii First_post (Pointeur_AUii *A)
    {
      /** Variables locales **/
      Pointeur_AUii First_post2 ;
      Pointeur_AUii Tmp;

      /** Corps du module **/
     Tmp  =  *A ;
     while( ( ( Fg_AUii(Tmp ) != NULL ) || ( Fd_AUii(Tmp ) != NULL ) )) {
       while( ( Fg_AUii(Tmp ) != NULL )) {
         Tmp  =  Fg_AUii(Tmp ) ;

       } ;
       while( ( ( Fg_AUii(Tmp ) == NULL ) && ( Fd_AUii(Tmp ) != NULL ) )) {
         Tmp  =  Fd_AUii(Tmp ) ;

       } ;

     } ;
     First_post2  =  Tmp ;

     return First_post2 ;
    }
  /*--------------------------------------    */
  /* le suivant postordre d'un noeud donné */

  Pointeur_AUii Suiv_post (Pointeur_AUii *A)
    {
      /** Variables locales **/
      Pointeur_AUii Suiv_post2 ;
      Pointeur_AUii Q;
      Pointeur_AUii Tmp;

      /** Corps du module **/
     Q  =  Pere_AUii(*A ) ;
     if( Q != NULL)   {
       if( *A == Fg_AUii(Q ))   {
         if( Fd_AUii(Q ) != NULL)   {
           Tmp  =  Fd_AUii(Q ) ;
           while( ( ( Fg_AUii(Tmp ) != NULL ) || ( Fd_AUii(Tmp ) != NULL ) )) {
             if( Fg_AUii(Tmp ) != NULL)   {
               Tmp  =  Fg_AUii(Tmp ) ;
               }
             else
               {
               Tmp  =  Fd_AUii(Tmp ) ;

             } ;

           } ;
           Suiv_post2  =  Tmp ;
           }
         else
           {
           Suiv_post2  =  Q ;

         } ;
         }
       else
         {
         Suiv_post2  =  Q ;

       } ;
       }
     else
       {
       Suiv_post2  =  NULL ;

     } ;

     return Suiv_post2 ;
    }
  /*--------------------------------------    */
  /* equilibrer un noeud donné */

  void Equilibrer (Pointeur_AUii *A)
    {
      /** Variables locales **/
      Pointeur_AUii B;
      Pointeur_AUii Q;
      Pointeur_AUii Child;

      /** Corps du module **/
     if( Struct2_Uii(Info_AUii(*A )  ) <= - 2)   {
       Child  =  Fd_AUii(*A ) ;
       if( Struct2_Uii(Info_AUii(Child )  ) <= 0) {
         B  =  Rotg_avl ( & *A ) ;
         }
       else
         {
         Q  =  Rotd_avl ( & Child ) ;
         Aff_fd_AUii(*A , Q ) ;
         Aff_pere_AUii(Q , *A ) ;
         B  =  Rotg_avl ( & *A ) ;

       } ;
       }
     else
       {
       if( Struct2_Uii(Info_AUii(*A )  ) >= 2)   {
         Child  =  Fg_AUii(*A ) ;
         if( Struct2_Uii(Info_AUii(Child )  ) >= 0)   {
           B  =  Rotd_avl ( & *A ) ;
           }
         else
           {
           Q  =  Rotg_avl ( & Child ) ;
           Aff_fg_AUii(*A , Q ) ;
           Aff_pere_AUii(Q , *A ) ;
           B  =  Rotd_avl ( & *A ) ;

         } ;

       } ;

     } ;

    }
  /*--------------------------------------    */
  /* transformer un arb vers un avl*/

  void Arb_to_avl (Pointeur_AUii *A)
    {
      /** Variables locales **/
      Pointeur_AUii Q;
      Pointeur_AUii Im;
      int Equilibre;
      int Rot;
      Pointeur_AUii _Px1;
      Pointeur_AUii _Px2;

      /** Corps du module **/
     Im  =  Add_imaginary_root ( & *A ) ;
     Equilibre  =  0 ;
     Rot  =  0 ;
     _Px1 =  Fd_AUii(Im ) ;
     Q  =  First_post ( &_Px1) ;
     while( ( ( Equilibre == 0 ) )) {
       if( Rot == 1) {
         _Px2 =  Fd_AUii(Im ) ;
         Q  =  First_post ( &_Px2) ;

       } ;
       while( ( ( ( Struct2_Uii(Info_AUii(Q )  ) >= - 1 ) && ( Struct2_Uii(Info_AUii(Q )  ) <= 1 ) ) && ( Q != Fd_AUii(Im ) ) )) {
         Q  =  Suiv_post ( & Q ) ;

       } ;
       if( ( ( Struct2_Uii(Info_AUii(Q )  ) < - 1 ) || ( Struct2_Uii(Info_AUii(Q )  ) > 1 ) ))   {
         Equilibrer ( & Q ) ;
         Rot  =  1 ;
         }
       else
         {
         Equilibre  =  1 ;

       } ;

     } ;
     *A  =  Fd_AUii(Im ) ;
     Free_imaginary_root ( & Im ) ;
     Aff_pere_AUii(*A , NULL ) ;

    }
  /*--------------------------------------    */
  /* inserer dans l'arbre qui va être equilibré par la transformation vers avl*/

  void Insertavl (Pointeur_AUii *Root , int *V)
    {
      /** Variables locales **/
      Pointeur_AUii Tmp;
      Pointeur_AUii Prec;
      bool Trouv;
      bool Droit;
      Pointeur_Uii Stmp;

      /** Corps du module **/
     Tmp  =  *Root ;
     Prec  =  NULL ;
     Trouv  =  False ;
     while( ( ( Tmp != NULL ) && ( ! Trouv ) )) {
       if( ( Struct1_Uii(Info_AUii(Tmp )  ) > *V )) {
         Prec  =  Tmp ;
         Tmp  =  Fg_AUii(Tmp ) ;
         Droit  =  False ;
        /* A Gauche */
         }
       else
         {
         if( ( Struct1_Uii(Info_AUii(Tmp )  ) < *V )) {
           Prec  =  Tmp ;
           Tmp  =  Fd_AUii(Tmp ) ;
           Droit  =  True ;
          /* A Droite */
           }
         else
           {
           Trouv  =  True ;

         } ;

       } ;

     } ;
     if( ( ! Trouv )) {
        avl_nbr_noeud++;
       if( ( Prec == NULL )) {
         Creernoeud_AUii(&*Root ) ;
         Alloc_struct_Uii(&Stmp ) ;
         Aff_struct1_Uii(Stmp  , *V ) ;
         Aff_struct2_Uii(Stmp  , 0 ) ;
         Aff_info_AUii(*Root , Stmp ) ;
         Aff_pere_AUii(*Root , NULL ) ;
         }
       else
         {
         if( Droit) {
           Creernoeud_AUii(&Tmp ) ;
           Alloc_struct_Uii(&Stmp ) ;
           Aff_struct1_Uii(Stmp  , *V ) ;
           Aff_struct2_Uii(Stmp  , 0 ) ;
           Aff_info_AUii(Tmp , Stmp ) ;
           Aff_fd_AUii(Prec , Tmp ) ;
           Aff_pere_AUii(Tmp , Prec ) ;
           }
         else
           {
           Creernoeud_AUii(&Tmp ) ;
           Alloc_struct_Uii(&Stmp ) ;
           Aff_struct1_Uii(Stmp  , *V ) ;
           Aff_struct2_Uii(Stmp  , 0 ) ;
           Aff_info_AUii(Tmp , Stmp ) ;
           Aff_fg_AUii(Prec , Tmp ) ;
           Aff_pere_AUii(Tmp , Prec ) ;

         } ;

       } ;

     } ;

    }
  /*--------------------------------------    */
  /* Calculer le profondeur d'un arb pour l'avl*/

  int  Prof_arb (Pointeur_AUii *Root)
    {
      /** Variables locales **/
      int  Prof_arb2 ;
      Pointeur_AUii _Px1;
      Pointeur_AUii _Px2;

      /** Corps du module **/
     if( ( *Root != NULL )) {
       _Px1 =  Fd_AUii(*Root ) ;
       _Px2 =  Fg_AUii(*Root ) ;
       Prof_arb2  =  1 + Max(Prof_arb ( &_Px1) , Prof_arb ( &_Px2) ) ;
       }
     else
       {
       Prof_arb2  =  - 1 ;

     } ;

     return Prof_arb2 ;
    }
  /*--------------------------------------    */
  /* Calculer le profondeur d'un arb pour le test de dsw*/

  int  Prof_arb_dsw (Pointeur_Ai *Root)
    {
      /** Variables locales **/
      int  Prof_arb_dsw2 ;
      Pointeur_Ai _Px1;
      Pointeur_Ai _Px2;

      /** Corps du module **/
     if( ( *Root != NULL )) {
       _Px1 =  Fd_Ai(*Root ) ;
       _Px2 =  Fg_Ai(*Root ) ;
       Prof_arb_dsw2  =  1 + Max(Prof_arb_dsw ( &_Px1) , Prof_arb_dsw ( &_Px2) ) ;
       }
     else
       {
       Prof_arb_dsw2  =  - 1 ;

     } ;

     return Prof_arb_dsw2 ;
    }
  /*--------------------------------------    */
  /* Liberer l'espace occupé par l'arbre equilibré par dsw */

  void Free_dsw (Pointeur_Ai *A)
    {
      /** Variables locales **/
      Pointeur_Ai _Px1;
      Pointeur_Ai _Px2;

      /** Corps du module **/
     if( ( *A != NULL )) {
       _Px1 =  Fg_Ai(*A ) ;
       Free_dsw ( &_Px1) ;
       _Px2 =  Fd_Ai(*A ) ;
       Free_dsw ( &_Px2) ;
       Liberernoeud_Ai(*A ) ;

     } ;

    }
  /*--------------------------------------    */
  /* Liberer l'espace occupé par l'arbre equilibré par transformation vers avl */

  void Free_avl (Pointeur_AUii *A)
    {
      /** Variables locales **/
      Pointeur_AUii _Px1;
      Pointeur_AUii _Px2;

      /** Corps du module **/
     if( ( *A != NULL )) {
       _Px1 =  Fg_AUii(*A ) ;
       Free_avl ( &_Px1) ;
       _Px2 =  Fd_AUii(*A ) ;
       Free_avl ( &_Px2) ;
       Liber_struct_Uii(Info_AUii(*A ) ) ;
       Liberernoeud_AUii(*A ) ;

     } ;

    }

  int main(int argc, char *argv[])
    {
     unsigned int N;
     FILE *fdsw,*favl;
     clock_t d,f;

     fdsw = fopen("DSW.txt","w");
     favl = fopen("AVL.txt","w");
     printf("Entrez le nombre d'iteration :");
     scanf("%d",&N);
     T = malloc(10000000 * sizeof(int));
     for( K  =  1 ;K <=  N ; ++K){
       M = 1500 * K ; ///le nombre d'elements
       printf ( " %s\n", "-------- k =" ) ;
       printf ( " %d\n", K ) ;
       Aleatab ( & T ) ;
      /* ----------------------DSW------------------------*/
       for( J  =  1 ;J <=  M ; ++J){
         _Px1 =  Element_V12i(T , J   ) ;
         Insertarb ( & A , &_Px1) ;

       } ;
       printf ( " %s", " DSW : " ) ;
       dsw_noeud = 0;
       dsw_rot = 0 ;
       d = clock() ;
       Dsw ( & A ) ;
       f = clock () ;
       fprintf(fdsw,"%d ; %d ; %d ; %d ; %lf ;\n",Nbr_noeud_arb(&A),dsw_noeud,dsw_rot,Prof_arb_dsw(&A),(((double)(f-d))/CLOCKS_PER_SEC));
       printf ( " %d\n", Verif_equi_dsw(&A) ) ;
       printf ( " %s\n", " ***************************************************** " ) ;
      /* ----------------------ARB_VERS_AVL------------------------*/
       avl_nbr_noeud = 0 ;
       for( J  =  1 ;J <=  M ; ++J){
         _Px2 =  Element_V12i(T , J   ) ;
         Insertavl ( & Avl , &_Px2) ;

       } ;
       printf ( " %s\n", " Transformation vers AVL : " ) ;
       Calcul_bal ( & Avl ) ;
       avl_noeud= 0 ;
       avl_rot = 0 ;
       d = clock() ;
       Arb_to_avl ( & Avl ) ;
       f = clock () ;
       fprintf(favl,"%d ; %d ; %d ; %d ; %lf ;\n",avl_nbr_noeud,avl_noeud,avl_rot,Prof_arb(&Avl),(((double)(f-d))/CLOCKS_PER_SEC));
       printf ( " %d\n", Verif_equi(&Avl) ) ;
      /* ----------------------Liberation de l'espace ------------------------*/
       Free_dsw ( & A ) ;
       Free_avl ( & Avl ) ;
       A  =  NULL ;
       Avl  =  NULL ;

     } ;


      system("PAUSE");
      return 0;
    }
