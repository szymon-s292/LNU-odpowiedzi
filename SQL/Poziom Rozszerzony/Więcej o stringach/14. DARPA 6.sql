select ID, SN from tests where SN not glob '[0-9][0-9][A-Z][a-z][0-9][0-9][0-9][0-9][A-Z][A-Z][a-z][0-9][0-9][A-Ca-C]' and length(SN) == 14

/* to jest źle */
