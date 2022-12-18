import React, { memo } from "react";
import "./CharacterCard.css";
import { AiOutlineArrowRight, AiFillHeart } from "react-icons/ai";

function CharacterCard({ characterData }) {
  var cardData = characterData.data;

  return (
    <div>
      {cardData && cardData.length > 0 ? (
        cardData.map((item) => (
          <div key={item.mal_id} className="characterCard">
            <img
              src={item.images.webp.image_url}
              className="image"
              alt="Character_Img"
            />

            <div className="card_header">
              <h3>{item.name}</h3>
              <div>
                {item.nicknames.map((nick, index) => (
                  <span className="nickname" key={index}>
                    {nick}
                  </span>
                ))}
              </div>
            </div>

            <div className="favorite">
              <AiFillHeart style={{ color: "red" }} />
              <div style={{ marginLeft: "10px" }}>{item.favorites}</div>
            </div>
            <a href={item.url} className="arrow-icon">
              <AiOutlineArrowRight />
            </a>
          </div>
        ))
      ) : (
        <div className="notfoundpage">No data found</div>
      )}
    </div>
  );
}

export default memo(CharacterCard);
