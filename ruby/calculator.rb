puts "Enter frist number:"
num1 = gets.chomp().to_f
puts "Enter oprator :"
op = gets.chomp()
puts "Enter second number :"
num2 = gets.chomp().to_f

if op == "+"
  puts (num1+num2)
elsif op == "-"
  puts (num1-num2)
elsif op == "/"
  puts (num1/num2)
elsif op == "*"
  puts (num1*num2)
else
  puts "Invalid syntax.."
end


puts "switch .."

def get_day_name(day)
  day_name = ""

  case day
  when "mon"
    day_name = "Monday"
  when "tue"
    day_name = "Tuesday"
  when "wed"
    day_name = "Wednsday"
  when "thu"
    day_name = "Thurshday"
  when "fri"
    day_name = "Friday"
  when "sat"
    day_name = "Saturday"
  when "sun"
    day_name = "Sunday"
 else
   day_name = "Invalid name"
  end
  return day_name
end

puts get_day_name("fri")


i = 1
while i<=5
  puts i
  i += 1
end 
