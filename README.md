🎭 Hangman - Grupi 45
Mirësevini në lojën tonë Hangman në C++! Kjo është një lojë klasike ku duhet të gjesh fjalën e fshehur duke propozuar shkronja një nga një.

Si luhet?
Lojtari ekzekuton lojën dhe një fjalë e rastësishme zgjidhet.
Fjalët shfaqen me _ _ _ _, dhe lojtari duhet të gjejë shkronjat e sakta.
Nëse shkronja është e saktë, ajo shfaqet në vendin e duhur.
Nëse është gabim, humbet një përpjekje.
Qëllimi është të gjesh të gjithë fjalën para se të mbarojnë përpjekjet!
🔧 Si ta instalosh dhe ekzekutosh?
Shkarko projektin:
bash
Copy
Edit
git clone https://github.com/ErdaKryeziu/Hangman.Grupi45.git
cd Hangman.Grupi45
Kompilo lojën:
bash
Copy
Edit
g++ -o hangman main.cpp game.cpp setup.cpp display.cpp input.cpp
Nise lojën:
bash
Copy
Edit
./hangman
📂 Struktura e projektit
main.cpp → Kontrollon rrjedhën kryesore të lojës
game.cpp → Përmban logjikën e lojës
setup.cpp → Zgjedh një fjalë të rastësishme
display.cpp → Shfaq fjalën dhe përpjekjet e mbetura
input.cpp → Menaxhon hyrjen nga përdoruesi
