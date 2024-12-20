let main () =
  let x = ref 5 in
  let y = ref 10 in
  let z = ref 0 in
  (* // Este es un comentario de una línea
 *)
  z := !x + !y;
  if !z > 10 then
  z := !z - 5
  else
  z := !z + 5;
;
  (* /* Este es un comentario
       de múltiples líneas */ *)
  for i = 0 to 5 do
  (let temp = !x in x := temp + 1; temp);
  (let temp = !y in y := temp - 1; temp);
  done;
  while !x < 20 do
  x := !x + 2;
  done;
  0
;;
