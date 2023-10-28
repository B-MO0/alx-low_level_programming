c_files=()

while IFS= read -r -d $'\0' file; do
  c_files+=("$file")
done < <(find "$(pwd)" -type f -name "*.c" -print0)

for c_file in "${c_files[@]}"; do
  gcc -c "$c_file"
done

o_files=()

while IFS= read -r -d $'\0' file; do
  o_files+=("$file")
done < <(find "$(pwd)" -type f -name "*.o" -print0)

ar rc liball.a "${o_files[@]}"
