class LinkedList
  attr_accessor :head, :tail

  # Definimos la cabeza de la pila
  def initialize (head)
      raise "LinkedList must be initialized with a Node." unless head.is_a?(Node)
          
      @head = head
      @tail = head
  end

  # Insertando un nodo a la lista
  def insert(node)
      @tail.next = node
      @tail = @tail.next
  end

  # Imprime todos los valores de la lista enlazada en orden.
  def print
      current_node = @head
      
      while current_node != nil
          puts "\tLL Node Value = #{current_node.value}"
          current_node = current_node.next
      end
  end
  #  ciclo de iteracion a través de valores de lista y de rendimiento vinculados a un bloque .
  def iterate
      if block_given?
          current_node = @head

          while current_node != nil
              yield current_node.value
              current_node = current_node.next
          end
      else
          print
      end
  end
end
