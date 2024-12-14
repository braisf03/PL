let main () =
  let sum = ref 0
  let rec for_loop (ref 1) =
    if !i <= 10 then
      begin
        sum := !sum + !i;
        i := !i + 1;
        for_loop i := !i + 1
      end
    else
      ()
  in
  for_loop (ref 1)
  !sum
