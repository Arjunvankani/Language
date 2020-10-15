friends = Array["Keval", "Karan", "Oscar"]
frd = Array.new
frd[0] = "Jay"
frd[5] = "Arjun"
puts friends.include? "Oscar"
puts friends.reverse()
puts friends.sort()
puts frd.length()


state = {
  :Pennsylvania => "PA",
  2 => "NY",
  "Oregon" => "OR"
}
puts state
puts state["Oregon"]
puts state[:Pennsylvania]
puts state[2]
