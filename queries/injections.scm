(
  (content) @injection.content
  (#set! injection.language "html")
  (#set! injection.combined)
)

(
  (shorthand_perl_code
	(perl_code) @injection.content
	(#set! injection.language "perl+treesitter")
	(#set! injection.combined)
  )
)
	
(
  (shorthand_perl_expression
	(perl_code) @injection.content
	(#set! injection.language "perl+treesitter")
  )
)
		
(
  (shorthand_perl_expression_escaped
	(perl_code) @injection.content
	(#set! injection.language "perl+treesitter")
  )
)

(
  (bracketed_perl_code
	(perl_code) @injection.content
	(#set! injection.language "perl+treesitter")
	(#set! injection.combined)
  )
)
	  
(
  (bracketed_perl_expression
	(perl_code) @injection.content
	(#set! injection.language "perl+treesitter")
  )
)

(
  (bracketed_perl_expression_escaped
	(perl_code) @injection.content
	(#set! injection.language "perl+treesitter")
  )
)
