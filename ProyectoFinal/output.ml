let main () =
  let sum = ref 0 in
  for i = 1 to 10 do
  sum := !sum + i;
  done;
  !sum
