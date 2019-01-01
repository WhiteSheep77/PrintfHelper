
OBJECTS = testmain.o
	  
	  
					  
DEPENDS=$(OBJECTS:.o=.d)



# Name of the executable
EXENAME = testPrintfHelper


 
.cpp.o:
	@echo Compile $<	
	@$(CC) -c $< -o $@
.c.o:
	@echo Compile $<	
	@$(CC) -c $< -o $@

# Builds all object files and executable
${EXENAME} : $(OBJECTS) $(EXTLIBS)
	$(CC) $(CFLAGS) $(CLFLAGS) $(LDFLAGS) -o $(EXENAME) $(LDLIBS) $(OBJECTS)  $(EXTLIBS) -lstdc++ $(MAPFILE)
	strip $(EXENAME)
	
-include $(DEPENDS)


	
# Clean up
clean :
	rm -f $(OBJECTS) ${EXENAME} ${EXENAME}.elf $(EXENAME).gdb $(EXENAME).map $(DEPENDS)

