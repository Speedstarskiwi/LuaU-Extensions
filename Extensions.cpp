/* 
Create a new lua state but use lua_newthread(L); right after you do it.
The addresses can be jumped onto Interactive Dissassembler (IDA) or decompilers.

watchdog address -> Search on strings "LuauWatchdog" -> decompile, double click on function.
*/

auto luaustring_address = 0x01337610;

using Luaustring_def = int(__thiscall*)(const char*);
Luaustring_def Luaustring = (Luaustring_def)(x(luaustring_address));

bool startluaustrings()
{
   Luaustring("LuauWatchdog");
   Luaustring("LuauProfiler");
   if (luaustring_address){return true;}else{return false;}
}
