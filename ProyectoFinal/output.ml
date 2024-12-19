let suma a b =
  !a + !b
;;

let resta a b =
  !a - !b
;;

let multiplica x y =
  !x * !y
;;

let main () =
  let resultado1 = ref 0 in
  let resultado2 = ref 0 in
  let resultado3 = ref 0 in
  resultado1 := suma (ref 5) (ref 3);
  resultado2 := resta (ref 10) (ref 4);
  resultado3 := multiplica resultado1 resultado2;
  !resultado3
;;
