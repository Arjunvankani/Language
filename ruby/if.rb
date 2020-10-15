ismale = true
istall = false

if ismale and istall
  puts "You are  tall male"
else
  puts "You either male or not  tall "
end


if ismale and istall
  puts "\nYou are  tall male"
elsif ismale and !istall
  puts "\nYou are a short male"
elsif !ismale and istall
  puts "\nYou are not male but tall"
else
  puts "\nYou either not male and not tall "
end




def max(n1, n2, n3)
  if n1 >= n2 and n1 >= n3
    return n1
  elsif n2 >= n1 and  n2 >= n3
    return n2
  else
    return n3
  end
end

puts max(412,8,740)
