t=poly2trellis(7,[171,131]);
originalInput = round(rand(1, 50));
encoded=convenc(flip(originalInput),t);
customEncoded=ConEncoder(originalInput,50);
disp(customEncoded-encoded);
% decoded=vitdec(encoded,t,2,'trunc','hard');
% customDecoded=ConDecoder(customEncoded,100);
% disp(customDecoded-decoded);