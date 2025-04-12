# Variables generales 
CXX = g++ 
CXXFLAGS = -Wall -Wextra -std=c++17 -g 
 
# Detectar automáticamente los archivos fuente y objetos 
SOURCES = $(wildcard *.cpp) 
OBJECTS = $(SOURCES:.cpp=.o) 
 
# Ejecutable 
TARGET = programa 
 
# Regla predeterminada: compila y ejecuta 
all: $(TARGET) 
	./$(TARGET) 
 
# Regla para compilar el ejecutable 
$(TARGET): $(OBJECTS) 
	$(CXX) $(CXXFLAGS) -o $@ $^ 
 
# Regla para compilar archivos .cpp a .o (implícita) 
%.o: %.cpp 
	$(CXX) $(CXXFLAGS) -c $< -o $@ 
 
# Limpieza 
clean: 
	del /q $(OBJECTS) $(TARGET) 
 
# Dependencias automáticas 
depend: $(SOURCES) 
	$(CXX) -MM $^ 
 
-include dependencias.mk 
