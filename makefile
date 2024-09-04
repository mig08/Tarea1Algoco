# Nombre del ejecutable
TARGET = Tarea1

# Compilador
CXX = g++

# Opciones del compilador
CXXFLAGS = -Wall -g

# Archivos fuente
SRCS = Tarea1.cpp Algoritmos.cpp

# Archivos objeto (se generan automáticamente a partir de los archivos fuente)
OBJS = $(SRCS:.cpp=.o)

# Regla para generar el ejecutable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Regla para compilar archivos .cpp a .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para limpiar los archivos generados (objetos y ejecutable)
clean:
	rm -f $(OBJS) $(TARGET)

# Regla para limpiar solo los archivos objeto
clean_obj:
	rm -f $(OBJS)

# Indica que las reglas clean y clean_obj no corresponden a archivos
.PHONY: clean clean_obj
