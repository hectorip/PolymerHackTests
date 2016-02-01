class Stack
  def initialize
    @factor= Array.new
  end
  
  def pop
    @factor.pop
  end
  
  def push(element)
    @factor.push(element)
    self
  end
  
  def size
    @factor.size
  end
end
